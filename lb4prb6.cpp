#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    char name[20];
    public:
    void setdata(){
        cout<<"Enter roll no: "<<endl;
        cin>>rollno;
        cout<<"Enter name "<<endl;
        cin>>name;

    }
    void getdata(){
        cout<<"the Student information is : "<<endl;
        cout<<"Roll no :"<<rollno<<endl;
        cout<<"Name: "<<name;
    }
};
class internalexam:public student{
    protected:
    int mark[7]; // Marks for 7 subjects
    float avgmark; // Average mark

public:
    void setInternalMarks() {
    cout << "Enter internal exam marks for 7 subjects: " << endl;
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> mark[i];
            sum += mark[i];
        }
        avgmark = sum / 7.0;
    }

    void displayInternalMarks() {
        cout << "Internal Exam Marks: " << endl;
        for (int i = 0; i < 7; i++) {
            cout << "Subject " << (i + 1) << ": " << mark[i] << endl;
        }
        cout << "Average Internal Marks: " << avgmark << endl;
    }
};
class finalexam:public student{

 protected:
    float marks[7];
    float avgmark;
    public:
    void setdata(){
        student ::setdata();
        cout<<"enter Final exam marks for 7subject "<<endl;
        int sum=0;
        for(int i=0;i<7;i++){
            cout<<"Subject "<<(i+1)<<":";
            cin>>marks[i];
            sum=sum+marks[i];
        }
        avgmark=sum/7.0;
    }
    void getdata(){
       cout << "Final Exam Marks: " << endl;
        for (int i = 0; i < 7; i++) {
            cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
        }
        cout << "Average Final  Marks: " << avgmark << endl;
    }

};
int main(){
     internalexam internalStudent;
    finalexam finalStudent;

    cout << "Enter student details for internal exam:" << endl;
    internalStudent.setdata();
    internalStudent.setInternalMarks();

    cout << "\nEnter student details for final exam:" << endl;
    finalStudent.setdata();
    finalStudent.getdata();

    cout << "\nDisplaying student details and internal exam marks:" << endl;
    internalStudent.getdata();
    internalStudent.displayInternalMarks();

    cout << "\nDisplaying student details and final exam marks:" << endl;
    finalStudent.getdata();
    finalStudent.getdata();

    return 0;
}

