  // https://www.youtube.com/watch?v=JxtmaAFfVBo
  
  class Node 
    {
    public : 
    Node * next;
    Node * prev;
    int val;
    int key;


    Node(int key, int value)
    {
    this->key = key;
    this->val = value ;
    this->next = NULL;
    this->prev  = NULL;
    }
    };

    class LRUCache {    
    public:
    Node * head , *tail;
    int capacity ,size ; 
    unordered_map<int, Node * > m;
    // constructor
    LRUCache(int capacity) {

        
    this->capacity = capacity;
    this->size = 0;
    this->head = new Node (-1,-1);
    this->tail = new Node(-1,-1);

    head->next = tail;
    tail->prev = head;
    }

 
    void AddNode(Node * node)  // Add in front 
    {

    Node * remaining = head->next ;

    head->next = node ;
    node->prev = head;
    node->next  =remaining;
    remaining -> prev = node ;
  

    }


    void  DeleteNode (Node * node)
    {
    Node * prevNode = node->prev;
    Node * remaining = node->next;
    prevNode ->next  = remaining;
    remaining->prev = prevNode ;
    node->next = NULL;
    node->prev = NULL;

        
       
    }

    void moveToFront(Node * node )
    {
    DeleteNode(node);
    AddNode(node);
    }

    int get(int key) {

        if(m.find(key) == m.end())
            return -1;
        else 
        {
       Node * node = m[key];
            int ans = node->val;
            moveToFront(node);
            return ans ;
        }

    }

    void put(int key, int value) {

        
        Node * newNode = new Node(key , value);
        
        if(m.find(key) !=  m.end()) // if  already present;
        {
            Node * node = m[key];
            node->val = value;
            moveToFront(node);
        }
        
        else if(size < capacity)
        {
            AddNode(newNode);
         m[key] = newNode ; 
            size++;
        }
        else if(size == capacity)
        {
               Node * LRU = tail->prev;
            m.erase(LRU->key);
            m[key] = newNode ; 
            DeleteNode(LRU);
            AddNode(newNode);
        
        }
        
        
        
    }
    };

    /**
    * Your LRUCache object will be instantiated and called as such:
    * LRUCache* obj = new LRUCache(capacity);
    * int param_1 = obj->get(key);
    * obj->put(key,value);
    */