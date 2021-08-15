// https://www.codingninjas.com/codestudio/problems/count-consonants-in-a-string_893281?leftPanelTab=0


bool isConsonant(char ch)
{
    // To handle lower case
    ch = toupper(ch);
 
    return !(ch == 'A' || ch == 'E' ||
            ch == 'I' || ch == 'O' ||
            ch == 'U') && ch >= 65 && ch <= 90;
}
int countConsonants(string str) {
   
   int count = 0;
    for (int i = 0; i < str.length(); i++)
 
        // To check is character is Consonant
        if (isConsonant(str[i]))
            ++count;
    return count;
    
    
    