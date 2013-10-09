#include<iostream>
#include<assert.h>
using namespace std; 
char * mystrcpy( char *strDest, const char *strSrc )   
{  
    assert( (strDest != NULL) && (strSrc != NULL));  
    char *address = strDest;   
    while((*strDest++ = *strSrc++) !='\0');
    return address;  
}
long strtoint(char *str,int length){  
	if(length > 1) {  
		return str[0]=='-' ? strtoint(str, length-1)*10-(str[length-1]-'0') : strtoint(str, length-1)*10+str[length-1]-'0';  
	} else {  
		return str[0]=='-' ? -1/10 : str[0]-'0';  
	}  

} 
int main()
{
	/*
	char strSrc [] = "terry";
	int len = strlen(strSrc);
	int len2 = sizeof(strSrc);
	char *strDest = (char *)calloc(10,sizeof(char));
	
	mystrcpy(strDest,strSrc);
	cout<<len<<" "<<len2<<" "<<strDest<<endl;
	free(strDest);*/
	char  str2 [] = "AAAA";
	strcpy_s(str2,"BBB");
	strcpy_s(str2,"cc");
	strcpy_s(str2,"D");
	char * str = "-12345678";
	cout<<str2<<endl;
	//cout<<strtoint(str,-1)<<endl;
	//cout<<strtoint(str,-2)<<endl;
	
} 