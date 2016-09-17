#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int id;
       Name name;
       double grade[3];       
};

void newLine();

int main(){
    Student stud;
    double sum = 0;
    cout << "Enter student record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=1; i<4; i++){
            cout << "Quiz "<< i << ": ";
            cin >> stud.grade[i]; 
			sum += stud.grade[i];       
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    
    for(int i=1; i<4; i++){
            cout << "Quiz "<< i << ": " << stud.grade[i] << endl;        
    }
    cout << "Grade average: " <<sum/3<<endl;
    if((sum/3)<75.01){
    	cout <<"Remarks: Passed";
    }
		else{
    	cout <<"Remarks: Failed";
	}
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
