// https://classroom.codingninjas.com/app/classroom/me/9525/content/153190/offering/1873338/problem/55

bool checkAB(char input[] , int i  =  0) {
	
    
    
    if (input[i] == '\0')
    {
        return true;
    }
    if (input[0] != 'a')
    {
        return false;
    }

    if (input[i] == 'a' && input[i + 1] == 'b' && input[i+2] != 'b')
    {
        return false;
    }

    if (input[i] == 'b' && input[i + 1] == 'b' && input[i + 2] == 'b')
    {
        return false;
    }
    checkAB(input, ++i);
    

}
