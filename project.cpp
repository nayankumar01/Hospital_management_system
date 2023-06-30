// hospital management project
#include"bits/stdc++.h"
using namespace std;
double Total_Amount=0;
string s1;
class Hospital_Management{
 
   string Hospital_name="sai hospital";
   string address="damoh naka, jabalpur";
   int phone_no=789465125;
   int no_of_wards=50;
public:
    void hospital_management(){
    cout<<"           ||++++++++++++++++ "<<Hospital_name<<" +++++++++++++++++|| "<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;
    cout<<"address: "<<address<<endl;
    cout<<"phone no:"<<phone_no<<endl;
    cout<<"no of wards:"<<no_of_wards<<endl;
    
   }
};
class Patient_Details{
   public:
    char name[30];
    char symptoms[20];
    int age;
    char gender[6];
    char adress[40];
   //  string address;
    void Patient_get_Details(){
        cout<<"Enter patient name    :";
        cin>>name;
        cout<<"Enter Symptom         :";
        cin>>symptoms;
        cout<<"Enter age of patient  :";
        cin>>age;
        cout<<"Enter gender          :";
        cin>>gender;
        cout<<"Enter Address         :";
        cin>>adress;

    }

};
class Pathalogy{
   public:
   
   int x;
   void pathalogy(){
    s1="Pathalogy";
   cout<<"<<<<<<<<<<Pathalogy Reports>>>>>>>>>"<<endl;}
   void Pathalogy_test(){
    
   cout<<"1.CBC\n"<<"2.Urinalysis\n"<<"3.Culture\n"<<"4.Liquid Panel Test\n"<<"5.Widal\n"<<"6.Malaria Parasites\n"<<"7.Exit"<<endl;

   cin>>x;
   int i;
   switch(x){
      case 1:
      {
         
         Total_Amount+=100;
         cout<<"Enter 1 to add test and 0 to end the task"<<endl;
         cin>>i;
         if(i==1)
         {
            
            Pathalogy_test();
            
         }
         else
         {
            cout<<"test fee:-"<<Total_Amount;
   
         }
         break;
         
         }
      case 2:
      {
         Total_Amount+=100;
         cout<<"Enter 1 to add test and 0 to end the task"<<endl;
         cin>>i;
         if(i==1)
         {
            
            Pathalogy_test();
            // cout<<"test fee:-"<<Total_Amount;
         }
         else
         {
            cout<<"test fee:-"<<Total_Amount;
         
         }
      break;
      }
      case 3:
      {Total_Amount+=100;
         cout<<"Enter 1 to add test and 0 to end the task"<<endl;
         cin>>i;
         if(i==1)
         {
            
            Pathalogy_test();
            // cout<<"test fee:-"<<Total_Amount;
         }
         else
         {
            cout<<"test fee:-"<<Total_Amount;
         
         }
      break;
      }
      case 4:
      {
      Total_Amount+=100;
         cout<<"Enter 1 to add test and 0 to end the task"<<endl;
         cin>>i;
         if(i==1)
         {
            
            Pathalogy_test();
            // cout<<"test fee:-"<<Total_Amount;
         }
         else
         {
            cout<<"test fee:-"<<Total_Amount;
         
         }
      
       break;
      }
      case 5:
      {
      Total_Amount+=100;
         cout<<"Enter 1 to add test and 0 to end the task"<<endl;
         cin>>i;
         if(i==1)
         {
            
            Pathalogy_test();
            // cout<<"test fee:-"<<Total_Amount;
         }
         else
         {
            cout<<"test fee:-"<<Total_Amount;
         
         }
         break;
      }
      case 6:
      {
      Total_Amount+=100;
         cout<<"Enter 1 to add test and 0 to end the task"<<endl;
         cin>>i;
         if(i==1)
         {
            
            Pathalogy_test();
            // cout<<"test fee:-"<<Total_Amount;
         }
         else
         {
            cout<<"test fee:-"<<Total_Amount;
         
         }
         break;
      }
      
      default:
      {
         cout<<"Invalid Input!"<<endl;
          break;

      }
   }
}
};

class Casualty
{
  public:
  
   void casualty()
   {
    s1="casuality";
    cout<<"                     | +++++ EMERGENCY SECTION +++++ |\n";
    cout<<"                     |===============================|\n";
    cout<<"-----------------------------------------------------------------------------"<<endl;}
    void Emergency_service()
    {
         int e;
         cout<<"1.accident\n"<<"2.pregnancy"<<endl;
         cout<<"\nplease fill your type of emergency ::"<<endl;
         cin>>e;
         switch(e){

            case 1:
         {
            int ward;
            string time, acc_add ,slot;
            string Dis;
           cout<<"<<<<<<<<<<This is accident ward>>>>>>>>>"<<endl;
           cout<<"Enter the timing of accident:";
           cin>>time;
           cout<<"\nEnter the place of accident:"<<endl;;
           cin>>acc_add;
           cout<<"Discription::";
           getline(cin,Dis);
           cout<<"Ward Details:------"<<endl;
           cout<<"S.no.       ward               fee per day             "<<endl;
           cout<<"1           general               1000 Rs              "<<endl;             
           cout<<"2           private               2000 Rs              "<<endl;             
           cout<<"Type 1 for general ward and 2 for private ward ::"<<endl;
           cin>>ward;
           switch (ward)
           {
           case 1:
           {
              
              cout<<"You have booked a General ward"<<endl;
            
              	cout<<"Your ward number is";
              	cout<<(rand()%10)+1<<"";
			  
              
              Total_Amount+=1000;
              break;
           }
            case 2:
              {
                cout<<"You have booked a Private ward"<<endl;
                cout<<"Your ward number is";
              	 cout<<(rand()%10)+1<<"";
                Total_Amount+=2000;
                break;
              }
           default:
           {
            cout<<"INVALID INPUT!!!!!!"<<endl;
            break;
           }
            
           }
           break;
         }
         
         case 2:
         {
           cout<<"This is Pregnancy ward"<<endl;
           cout<<"Ward Details:------"<<endl;
           cout<<"S.no.       ward               fee per day             "<<endl;
           cout<<"1           general               1000 Rs              "<<endl;             
           cout<<"2           private               2000 Rs              "<<endl;
           cout<<endl;             
           cout<<"Type 1 for general ward and 2 for private ward ::"<<endl;
           int ward;
           cin>>ward;
           switch (ward)
           {
           case 1:
           {
              
              cout<<"You have booked a General Pregnancy ward"<<endl;
              cout<<"Your ward number is";
              cout<<(rand()%10)+1<<"";
              Total_Amount+=1000;
              break;
           }
            case 2:
              {
               cout<<"You have booked a Private ward"<<endl;
               cout<<"Your ward number is"<<endl;
              	cout<<(rand()%10)+1<<"";
                Total_Amount+=2000;
                break;
              }
           default:
           {
            cout<<"INVALID INPUT!!!!!!"<<endl;
            break;
           }
            break;
           }
          cout<<"You can now go to Pregnancy ward"<<endl;
         }
         default:
         {
            cout<<"Invalid Input!"<<endl;
            break;
         }
         }
      }
      
};

class OPD{
   public:  //access specifier 
   int opd_charge=500; // default charge
   
   void opd(){
       	s1="OPD";  //string (global)

   cout<<"Charges for OPD:Rs.500 "<<endl;;
   cout<<"     Field                            Name             "<<endl;
   cout<<"1.Dermatologist:   -------- Dr.Keyur Genorkar          "<<endl;
   cout<<"2.Endocrinologist: -------- Dr.Siddhant Tiwari         "<<endl;
   cout<<"3.Family Physician:-------- Dr.Kamal Nayan             "<<endl;
   cout<<"4.Neurologist:     -------- Dr.Hrishabh Agrawal        "<<endl;
   cout<<"5.Gynacologist:    -------- Dr.Arti Jain               "<<endl;
   
   //above statements will give a list of doctor 

   int j;   //for getting choice 
   cout<<"Enter your choice:";  //asking user for choice 
   cin>>j;
   switch(j){
      case 1:{
         cout<<"    NAME                   Time             Days of Avaliability"<<endl;
         cout<<"Dr.Keyur Genorkar       12.00PM-2.00PM    MONDAY,TUESDAY,SATURDAY "<<endl;
         Total_Amount=opd_charge;//total amount =500rs 
         cout<<Total_Amount;
         break;
      }
      case 2:{
         cout<<"    NAME                   Time            Days of Avaliability"<<endl;
         cout<<"Dr.Siddhant Tiwari      12.00PM-2.00PM      MONDAY,SATURDAY "<<endl;
         Total_Amount=opd_charge;
         cout<<Total_Amount;
         break;
      }
      case 3:{
         cout<<"    NAME                   Time            Days of Avaliability"<<endl;
         cout<<"Dr.Kamal Nayan         11.00AM-2.00PM    TUESDAY,WEDNESDAY,SATURDAY "<<endl;
         Total_Amount=opd_charge;
         cout<<Total_Amount;
         break;
      }
      case 4:{
         cout<<"    NAME                   Time            Days of Avaliability"<<endl;
         cout<<"Dr.Hrishabh Agrawal    12.00PM-3.00PM     MONDAY,TUESDAY,SATURDAY "<<endl;
         Total_Amount=opd_charge;
         cout<<Total_Amount;
         break;
      }
      case 5:{
         cout<<"    NAME                   Time            Days of Avaliability"<<endl;
         cout<<"Dr.Archi Jain          10.00AM-2.00PM    MONDAY,TUESDAY,FRIDAY,SATURDAY "<<endl;
         Total_Amount=opd_charge;
         cout<<Total_Amount;
         break;
      }
   }

   
}


};
class Reciept:public Hospital_Management,public Casualty,public OPD,public Pathalogy,public Patient_Details
{
public:
   void reciept(){
   
   ofstream file("E://Hospital_Management.doc",ios::app);
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<endl;
   
   hospital_management();
   cout<<endl;
   cout<<"|                     ************<Reciept>************                       "<<endl;
   cout<<"|          _____________________________________________________              "<<endl;
   cout<<"|                                                    Department:";
   cout<<s1<<endl;
   cout<<"|                                                    Room No.:"<<(rand()%10)+1<<endl;
   cout<<"| **Pateint Details-----------                   "<<endl;
   cout<<"|    Name      - "<<name<<"                                                        "<<endl;
   cout<<"|    Age       - "<<age<<"                                                           "<<endl;
   cout<<"|    Gender    - "<<gender<<"                                                       "<<endl;
   cout<<"|    Adress    - "<<adress<<"                                                          "<<endl;
   cout<<"|    Sympotms  - "<<symptoms<<"                                                        "<<endl;
   cout<<"|                                         Total Payeble Amount-Rs."<<Total_Amount<<"            "<<endl;
   //recipet saved in file
   file<<"           ||++++++++++++++++ sai hospital +++++++++++++++++|| "<<endl;
   file<<"----------------------------------------------------------------------------------"<<endl;
   file<<"address: damoh naka"<<endl;
   file<<"phone no:789465125"<<endl;
   file<<"no of wards:50"<<endl;
   file<<endl;
   
   file<<endl;
   file<<"|                     ************<Reciept>************                       "<<endl;
   file<<"|          _____________________________________________________              "<<endl;
   file<<"|                                                    Department:";
   file<<s1<<endl;
   file<<"|                                                    Room No.:"<<(rand()%10)+1<<endl;
   file<<"| **Pateint Details-----------                   "<<endl;
   file<<"|    Name      - "<<name<<"                                                        "<<endl;
   file<<"|    Age       - "<<age<<"                                                           "<<endl;
   file<<"|    Gender    - "<<gender<<"                                                       "<<endl;
   file<<"|    Adress    - "<<adress<<"                                                          "<<endl;
   file<<"|    Sympotms  - "<<symptoms<<"                                                        "<<endl;
   file<<"|                                         Total Payeble Amount-Rs."<<Total_Amount<<"            "<<endl;
   file<<"|------------------------------------------------------------------------"<<endl;
   file<<endl;
   file<<endl;
   file<<endl;
file.close();

}
};


int main()
{
cout<<"///////////////////////////////////////"<<endl;
cout<<"     Hospital Management Clinic        "<<endl;
cout<<"///////////////////////////////////////"<<endl;
cout<<endl;
Hospital_Management H1;
H1.hospital_management();


cout<<"-----------User Login-----------"<<endl;
cout<<endl;
 char name[30];
 cout<<"Enter Your name:";
 cin>>name;
 string x= "89898480";
 string password;
 cout<<"Enter your password:";
 cin>>password;
 system("CLS");

 if (password==x)
 {
   //  Patient_Details p1;
   Reciept R1;
    R1.Patient_get_Details();
    cout<<"Services Provided----"<<endl;
   cout<<"1.Casuality\n"<<"2.OPD\n"<<"3.Pathalogy\n";
   cout<<endl;
   int i;
   cout<<"Enter your Choice :";
   cin>>i;
   system("CLS");
   switch(i)
   {
      case 1:{
         Casualty c1;
         c1.casualty();
         c1.Emergency_service();
         system("CLS");
         R1.reciept();
         break;

      }
      case 2:{
         OPD op;
         op.opd();
         system("CLS");
         // Reciept R1;
         R1.reciept();
         break;

      }
      case 3:{
         // Pathalogy p2;
         R1.pathalogy();

        R1.Pathalogy_test();
        system("CLS");
      //   Reciept R1;
        R1.reciept();
        break;

      }
      default:
      {
         cout<<"INVALID INPUT!"<<endl;
         break;
      }
   }
   

 }
 else
   {cout<<"incorrect password please enter correct password"<<endl;
   }

return 0;

}