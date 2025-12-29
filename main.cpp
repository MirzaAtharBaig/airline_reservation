#include <iostream>
#include <conio.h>
#include <fstream>
#include <time.h>
#include <string>
#include <process.h>
using namespace std;


    string gen_password(int length) {
    static string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    string result;
    result.resize(length);
        srand(time(NULL));
    for (int i = 0; i < length; i++)
        result[i] = charset[rand() % charset.length()];

    return result;
}

void welcome ()
{
         system("color f4");
         cout<<" WW    WW EEEE LL   CCCC  OOOO  MMM  MMM EEEE \n"
             <<" WW WW WW EE   LL   C     O  O  MM MM MM EE   \n"
             <<" WWW  WWW EEEE LLLL CCCC  OOOO  MM    MM EEEE \n"
             <<"\n                     To  \n\n"
             <<"      ppppppppp  IIIII        AAA\n"
             <<"      pp     pp   III        AA AA\n"
             <<"      pp     pp   III       AA   AA\n"
             <<"      ppppppppp   III      AAAAAAAAA\n"    
             <<"      pp          III     AA       AA\n"
             <<"      pp         IIIII   AA         AA\n"
             <<"\n\           RESERVATION SYSTEM"
             <<"\n==============================================================================\n"; 
                                        
 }

class reservation
{ //class bracket
             private:
                string name,mode,flight[10];
                string password;
                string CNIC,address,tele_num,email_id,date,seat_type; 
                int flight_num;
                int seat;                
      public:
              reservation():seat(0)
              {}            
             void style()
             {
                  
                  cout<<"  Enter Your Good Name please! \n" ;
                  cout<<"  Name : ";
                  getline(cin,name);
                  cout<<"  Enter Your Address! \n" ;
  		          cout<<"  Address : ";
  		          getline(cin,address);
  		          cout<<"  Enter Your Contact number! \n" ;
  		          cout<<"  Contact number : ";
    		      getline(cin,tele_num);
		          cout<<"  Enter Your E-mail ID! \n" ;
		          cout<<"  E-mail ID : ";
		          getline(cin,email_id);
		          system("cls");
		          system("color 06");
    		        s:  
 	              cout<<" Please Select Class:\n"
                      <<"\tF for First\t"<<endl
                      <<"E for Economy"<<endl;
                
    	              getline(cin,seat_type);
 	              if(!(seat_type=="f"||seat_type=="F"||seat_type=="e"||seat_type=="E"))
 	              {
                    cout<<"invalid selection\n";
                     goto s;
 	                
                  }
    	              Select:
    	              cout<<"\n\n Flight Mode:\n1 for Domestic\t: 2 for International";
	                  getline(cin,mode);
	                  system("cls");
	                     if(mode == "1")
                         {
                                 system("color f0");
                           flight[0]= " Flight number: Source:    Destination: Depature Time:  Arrival Time\n pk212:         Islamabad:  Karachi:      8:00am:         11:00am\n";
	                       flight[1]= " Flight number: Source:    Destination: Depature Time:  Arrival Time\n pk252:         Islamabad:  Lahore :      9:00pm:         10:00pm \n";
                           flight[2]= " Flight number: Source:    Destination: Depature Time:  Arrival Time\n pk529:         Karachi:    Peshawar:     4:00am:         7:00am \n";                            
                           flight[3]= " Flight number: Source:    Destination: Depature Time:  Arrival Time\n pk786:         Lahore:     Quetta:       2:00pm:         4:00pm\n";
                           
                           
                                
                          cout<<" AVAILABLE FLIGHTS :"<< endl
                              << "serial no: Flight number: Source:    Destination: Depature Time:  Arrival Time\n"
                              << " 1 :       pk212:         Islamabad:  Karachi:      8:00am:         11:00am\n"
                              << " 2 :       pk252:         Islamabad:  Lahore :      9:00pm:         10:00pm \n"
                              << " 3 :       pk529:         Karachi:    Peshawar:     4:00am:         7:00am \n"
                              << " 4 :       pk786:         Lahore:     Quetta:       2:00pm:         4:00pm\n";
                       fly1:
                       cout<<" Select your desiredd flight number and Enter serial number";
                       cin>>flight_num;
                       cin.ignore();
                       if(flight_num<1 || flight_num>4)
                       {
                        cout<<"Invalid Selection\n";
                        cout<<"select again\n";
                  
                        goto fly1;
                        
                       }
                  
                       cout<<" you have selected flight is "<<flight_num<<endl;
                             switch(flight_num)
                             {
                             case 1:
                             cout<<flight[0]<<endl;
                             break;
                             case 2:
                             cout<<flight[1]<<endl;
                             break;
                             case 3:
                             cout<<flight[2]<<endl;
                             break;
                             case 4:
                             cout<<flight[3]<<endl;
                             break;
                             }
                         seat++;
                         if(seat==100)
                         {
                          seat=0;
                         }
                } //terminating 1st if 
                       else  if(mode=="2")
                         {// 2nd if bracket
                              system("color 4e");
                           flight[4]= " Flight number:  Source:    Destination:   Depature Time:  Arrival Time:\n pk212:          Islamabad:  Jaddah:        8:00am:         1:00pm\n";
	                       flight[5]= " Flight number:  Source:    Destination:   Depature Time:  Arrival Time:\n pk252:          Islamabad:  New York:      11:00pm:        10:00pm\n ";
                           flight[6]= " Flight number:  Source:    Destination:   Depature Time:  Arrival Time:\n pk529:          Karachi:    Benkok:        4:00am:         11:00am\n";                            
                           flight[7]= " Flight number:  Source:    Destination:   Depature Time:  Arrival Time:\n pk786:          Lahore:     Beijing:       2:00pm:         7:00pm\n";
                          
                          
                              
                          cout<<" AVAILABLE FLIGHTS :"<< endl
                              << "serial no:Flight number:  Source:    Destination:   Depature Time:  Arrival Time:\n"
                              << " 1 :      pk212:          Islamabad:  Jaddah:        8:00am:         1:00pm\n"
                              << " 2 :      pk252:          Islamabad:  New York:      11:00pm:        10:00pm\n"
                              << " 3 :      pk529:          Karachi:    Benkok:        4:00am:         11:00am\n"
                              << " 4 :      pk786:          Lahore:     Beijing:       2:00pm:         7:00pm\n";
                       fly2:      
                       cout<<" Select your desiredd flight number and Enter serial number";
                       cin>>flight_num;
                       cin.ignore();
                       if((flight_num<1 || flight_num>4))
                       {
                        cout<<"Invalid Selection\n";
                        cout<<"select again\n";
                        goto fly2;
                        }
                       cout<<" you have selected flight is "<<flight_num<<endl;
                             switch(flight_num)
                             {
                             case 1:
                             cout<<flight[4]<<endl;
                             break;
                             case 2:
                             cout<<flight[5]<<endl;
                             break;
                             case 3:
                             cout<<flight[6]<<endl;
                             break;
                             case 4:
                             cout<<flight[7]<<endl;
                             break;
                             }
                         seat++;
                         if(seat==100)
                         {
                          seat=0;
                         }
                   }// terminating 2nd if 
                    else 
                     {
                         cout<<"\n\n           Invalid Selection"<<endl;
                         cout<<"select again"<<endl;
                         goto Select;
                     }//terminating else
                         
                        system("cls");
                         password = gen_password(8);

                        system("color 0f");
                         cout<<"your seat has been confirmed"<<endl;
                         cout << password<<endl;  
                         
                       ofstream file;
                       file.open(password.c_str());
//                       file.open("reservation.txt", ios::app);
                       file << password<<endl;  
                       file <<"NAME:      " <<name<<"\n";
                       file <<"Address:       " <<address<<"\n";
                       file <<"E-mail ID : " <<email_id<<"\n";
                       file <<"contact number : " <<tele_num<<"\n";
                       file << "Seat number is :"<< seat<<"\n";
                       file << "#############################\n";
                       file.close();
                       system("pause");
            }// void style bracket
void display()
{      


     system("color 24");
       string pcode;
       pas:
       cout<<"enter the password :"<<endl;
       getline(cin,pcode);
       system("cls");
      string line;
    ifstream myfile (pcode.c_str());
  	if (myfile.is_open())
  	{

        	while (! myfile.eof() )
    		{
                 getline(myfile,line);
                 cout<<line << endl;
             }

    		myfile.close();
  	}
	else 
		cout << "No Reservation found!";
}// terminating display function	
     
};// class terminating


int main()
{  
    welcome();
    system("pause");
    system("cls");
   
    reservation r1;
    char a;
    int choice;
    do
    {
     system("color 2");  
        cout<<" ------------------------- MENU-----------------------------------\n";
				cout<<"\n1: RESERVATION"<<endl
            	    <<"\n2: DISPLAY"<<endl
				    <<"\n3: EXIT"<<endl
				    <<"\n\nEnter your choice:	";
				cin>>choice;
				system("cls");
				cin.ignore();
		switch(choice)	
        {	
        case 1:
        r1.style();
        break;
        case 2:
        r1.display();
        break;
        case 3:
        exit(0);
        break;
        default:
        cout<<"Invalid Entry"<<endl;
        break;
        }
        cout<<"do you want to continue (y/n)\n";
        cin>> a;
        system("cls");
   } //do while twrminating braces   
   while( a=='y' || a== 'Y');
   getch();
}
