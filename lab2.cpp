#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

double getround(double num){
		return round(num);
		
	}
		
int max(int num1,int num2){
	if(num1<num2){
	return num2;
    }
	else{
	return num1;
	}
}

int factorial(int numfactorial){
    if(numfactorial!=1)
     return numfactorial*factorial(numfactorial-1);
	}

float areasquare(float areasquareside){
  float areasquare;
  areasquare = areasquareside*areasquareside;
  return (areasquare);
}

float arearectangle(float arearectanglelength,float arearectanglewidth){
  float arearectangle;
  arearectangle = arearectanglelength*arearectanglewidth;
  return (arearectangle);
}

float areatriangle(float areatrianglebase, float areatriangleheight){
  float areatriangle;
  areatriangle = (0.5*areatrianglebase)*areatriangleheight;
  return (areatriangle);
}

float areacircle(float areacircleradius){
  float areacircle;
  areacircle = 3.142*areacircleradius*areacircleradius;
  return (areacircle);
}
	
main()
{
	//A. Problem1
	double num, result;
	cout<<"Enter a number to be rounded off:";
	cin>>num;
	result = getround(num);
	cout<<"Round Off Value:"<<result<<endl;
	cout<<endl;
	
	//A. problem2
	int min=1;
	int larger=20;
	srand((unsigned)time(NULL));
	cout<<"unique numbers: ";
	for(int i=0; i<10; i++)
	cout<<min + (rand()%(int)(larger-min+1))<<" ";
	cout<<endl;
	cout<<endl;
	
	//A.Problem 3
	float areasquareside;
	float arearectanglelength;
	float arearectanglewidth;
	float areatrianglebase;
	float areatriangleheight;
	float areacircleradius;
	cout<<"**********************"<<endl;
	cout<<"         MENU"<<endl;
	cout<<"**********************"<<endl;
	cout<<" [1] - Area of Square"<<endl;
	cout<<" [2] - Area of Rectangle"<<endl;
	cout<<" [3] - Area of Triangle"<<endl;
	cout<<" [4] - Area of Circle"<<endl;
	cout<<" [5] - Exit"<<endl;
	cout<<"-------------------------"<<endl;	
	char menu;
	cout<<"Enter your choice: ";
	cin>>menu;
	cout<<"-------------------------"<<endl;
   switch(menu)
   {
   case '1' :
      cout<<"AREA OF SQUARE"<< endl; 
      cout<<"-------------------------"<<endl;
      cout<<"Enter the side of the square: ";
      cin>>areasquareside;
      cout<<endl;
      cout<<"The area is "<<areasquare(areasquareside)<<" sq. units.";
      cout<<endl;
      break;
   case '2' :
	  cout<<"AREA OF RECTANGLE"<<endl;
	  cout<<"-------------------------"<<endl;
	  cout<<"Enter the Length and width of the rectangle: ";
	  cin>>arearectanglelength;
	  cout<<"  ";
	  cin>>arearectanglewidth;
	  cout<<endl;
	  cout<<"The area is "<<arearectangle(arearectanglelength, arearectanglewidth)<<" sq. units.";
	  cout<<endl;
	  break;
   case '3' :
      cout<<"AREA OF TRIANGLE"<<endl;
      cout<<"-------------------------"<<endl;
      cout<<"Enter the base and height of the triangle: ";
      cin>>areatrianglebase;
      cin>>areatriangleheight;
      cout<<endl;
      cout<<"The area is "<<areatriangle(areatrianglebase, areatriangleheight)<<" sq. units.";
      cout<<endl;
      break;
   case '4' :
      cout<<"AREA OF CIRCLE"<<endl;
      cout<<"-------------------------"<<endl;
      cout<<"Enter the radius: ";
      cin>>areacircleradius;
      cout<<endl;
      cout<<"The area is "<<areacircle(areacircleradius)<<" sq. units";
      cout<<endl;
	        break;
    case '5' :
    	cout<<"Thank You!";
    	cout<<endl;
    	break;
	   default :
      cout << "invalid choice" << endl;
   }
   cout<<endl;
   
	//B. Call by value
    int numfactorial;
    cout << "Enter a number: ";
    cin >> numfactorial;
    cout << "Factorial of " << numfactorial << " = " << factorial(numfactorial);
    cout<<endl;
    cout<<endl;
    
	//C. Function max()
	int num1,num2;
	cout<<"Enter 1st number:";
	cin>>num1;
	cout<<"Enter 2nd number:";
	cin>>num2;
	cout<<"The greater number is:"<<max(num1, num2)<<endl;
	
	return 0;
}

