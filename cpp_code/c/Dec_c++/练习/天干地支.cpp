#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;    //1980,  ¹«Ôª0Äê  ¸ý shen                                                                                                                  
	n%=60;
	switch(n%10)
	{
		case 1: cout<<"xin";break;
		case 2: cout<<"ren";break;
		case 3: cout<<"gui";break;
		case 4: cout<<"jia";break;
		case 5: cout<<"yi";break;
		case 6: cout<<"bing";break;
		case 7: cout<<"ding";break;
		case 8: cout<<"wu";break;
		case 9: cout<<"ji";break;
		case 0: cout<<"geng";break;
	}
	switch(n%12)
	{
		case 1: cout<<"you";break;
		case 2: cout<<"xv";break;
		case 3: cout<<"hai";break;
		case 4: cout<<"zi";break;
		case 5: cout<<"chou";break;
		case 6: cout<<"yin";break;
		case 7: cout<<"mao";break;
		case 8: cout<<"chen";break;
		case 9: cout<<"si";break;
		case 10:cout<<"wu";break;
		case 11:cout<<"wei";break;
		case 0: cout<<"shen";break;
	}
	return 0;
}
