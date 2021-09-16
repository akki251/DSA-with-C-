    priority_queue<pair<int, pair<int,int > > , vector<pair<int, pair<int,int > >> ,  greater<pair<int, pair<int,int > >>> pq;
    
    for(int i =  0 ; i < input.size() ; i ++)
    {
        pq.push({input[i]->at(0) , {i , 0}});
    }
    
    vector <int> ans; 
    while(!pq.empty())
    {
        
        pair<int , pair<int , int >> current = pq.top();
        pq.pop();
        
        int listNumber = current.second.first;
        int listIndex = current.second.second;
        int value = current.first;
        ans.push_back(value);
        listIndex++;
        if(listIndex  < input[listNumber]->size())
        {
            pq.push({input[listNumber]->at(listIndex) , {listNumber , listIndex} } );
        }    
    }
     
    return ans ;
    
    
    

    TN : NLOGK;