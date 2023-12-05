#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();

class Management
{
    public:

        Management()
        {
            mainMenu();
        }
};

class Details
{
    public:

        static string name,gender;
        string phoneNo;
        int age;
        string add;
        static int cID;
        char arr[100];

        void info()
        {
            cout<<"\nEnter the Customer ID: ";
            cin>>cID;
            cout<<"\nEnter the Name: ";
            cin>>name;
            cout<<"\nEnter the age: ";
            cin>>age;
            cout<<"\nEnter the Address: ";
			cin.ignore();
            getline(cin,add);
            cout<<"\nEnter the Gender: ";
            cin>>gender;
            cout<<"\nEnter your Phone Number: ";
            cin>>phoneNo;
            cout<<"\n****Your Details are Saved with us****\n";
        }
};
int Details::cID;
string Details::name;
string Details::gender;

class Registration
{
    public:
        static int ch;
        int ch1;
        int back;
        static float charges;
        
        void flights()
        {
            string flight[]={"Dubai","Australia","Russia","Singapore","Japan","New Zealand"};
            for(int i=0;i<6;i++)
            {
                cout<<"\t\t"<<(i+1)<<"] flight to "<<flight[i]<<endl;
            }
			cout<<"\n__________________________________________________________\n";
            cout<<"\n----------[_____Welcome To  JSPM Airlines!_____]----------\n";
			cout<<"__________________________________________________________";
            cout<<"\nSelect The Country Whose Tickets You want to Book: ";
            cin>>ch;
            switch(ch)
            {
                case 1:
                    {
						cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                        cout<<"\n~~~~~~~[_____Welcome To Dubai Emirates_____]~~~~~~";
						cout<<"\n`````````````````````````````````````````````````";
                        cout<<"\n** Following are the flights available to Dubai **\n ";
						cout<<"`````````````````````````````````````````````````"<<endl;
                        cout<<"1] DUB - 498"<<endl;
						cout<<"\t01-01-2024 8:00AM 4hrs Rs. 14000"<<endl<<endl;
						cout<<"2] DUB - 658"<<endl;
						cout<<"\t02-01-2024 4:00AM 8hrs Rs. 10000"<<endl<<endl;
						cout<<"3] DUB - 508"<<endl;
						cout<<"\t12-01-2024 11:00AM 10hrs Rs. 9000"<<endl<<endl<<endl;
                        cout<<"\nSelect the flight you want to book: ";
                        cin>>ch1;
                        if(ch1==1)
                        {
                            charges = 14000;
                            cout<<"\nYou have Successfully booked the flight DUB - 498"<<endl;
                            cout<<"\nYour Comfort is our Priority. Enjoy the journey!"<<endl;
                            cout<<"\nYou can go back to menu and take your ticket"<<endl<<endl;
                        }
                        else if(ch1==2)
                        {
                            charges = 10000;
                            cout<<"\nYou have Successfully booked the flight DUB - 658"<<endl;
                            cout<<"\nYour Comfort is our Priority. Enjoy the journey!"<<endl;
                            cout<<"\nYou can go back to menu and take your ticket"<<endl<<endl;
                        }
                        else if(ch1==3)
                        {
                            charges = 8000;
                            cout<<"\nYou have Successfully booked the flight DUB - 508"<<endl;
                            cout<<"\nYour Comfort is our Priority. Enjoy the journey!"<<endl;
                            cout<<"\nYou can go back to menu and take your ticket"<<endl<<endl;
                        }
                        else
                        {
                            cout<<"\nInvalid input, going back to Previous Menu"<<endl;
                            flights();
                        }
                        cout<<"\nPress 1 to go back to the Main Menu: "<<endl;
                        cin>>back;
                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                        }
                        case 2:
				    {
					    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                        cout<<"\n~~~~~~~[_____Welcome To Australian Airlines_____]~~~~~~";
						cout<<"\n```````````````````````````````````````````````````````";
                        cout<<"\n** Following are the flights available to Australia **\n";
						cout<<"```````````````````````````````````````````````````````"<<endl;
						
						cout<<"1. AUS - 198"<<endl;
						cout<<"\t09-01-2024 2:00PM 20hrs Rs. 34000"<<endl<<endl;
						cout<<"2. AUS - 158"<<endl;
						cout<<"\t11-01-2024 6:00AM 23hrs Rs. 29000"<<endl<<endl;
						cout<<"3. AUS - 208"<<endl;
						cout<<"\t14-01-2024 12:00AM 21hrs Rs. 40000"<<endl<<endl;
						cout<<"\nSelect the flight which you want to book :";
						cin>>ch1;
						
						if(ch1==1)
						{
							charges=34000;
							cout<<"\nYou have successfully booked the flight AUS - 198"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						
						else if(ch1==2)
						{
							charges=29000;
							cout<<"\nYou have successfully booked the flight AUS - 158"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						else if(ch1==3)
						{
							charges=40000;
							cout<<"\nYou have successfully booked the flight AUS - 208"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu..!"<<endl;
							flights();
						}
						
						cout<<"\nPress any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						
				    }
                        case 3:
				    {
					
					    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                        cout<<"\n~~~~~~~[_____Welcome To Russian Airlines_____]~~~~~~";
						cout<<"\n````````````````````````````````````````````````````";
                        cout<<"\n** Following are the flights available to Russia **\n";
						cout<<"````````````````````````````````````````````````````"<<endl;
						cout<<"1. RUS - 798"<<endl;
						cout<<"\t12-01-2024 10:00AM 14hrs Rs. 44000"<<endl;
						
						
						cout<<"\nSelect the flight you want to book :";
						cin>>ch1;
						
						if(ch1==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight RUS - 798"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;	
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						
						else
						{
							cout<<"Invalid input , shifting to the previous menu..!"<<endl;
							flights();
						}
						
						cout<<"\nPress any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					
				    }
                        case 4:
					{
						cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                        cout<<"\n~~~~~~~[_____Welcome To Singapore Airlines_____]~~~~~~";
						cout<<"\n``````````````````````````````````````````````````````";
                        cout<<"\n** Following are the flights available to Singapore **\n";
						cout<<"``````````````````````````````````````````````````````"<<endl;
						
						cout<<"1. SIN - 567"<<endl;
						cout<<"\t10-01-2024 9:00AM 22hrs Rs. 37000"<<endl;
						cout<<"2. SIN - 658"<<endl;
						cout<<"\t09-01-2024 6:00AM 22hrs Rs. 39000"<<endl;
						cout<<"3. SIN - 508"<<endl;
						cout<<"\t12-01-2024 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>ch1;
						
						if(ch1==1)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight SIN - 658"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(ch1==2)
						{
							charges=39000;
							cout<<"\nYou have successfully booked the flight SIN - 658"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(ch1==3)
						{
							charges=42000;
							cout<<"\nYou have successfully booked the flight SIN - 508"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu..!"<<endl;
							flights();
						}
						
						cout<<"\nPress any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
                    case 5:
					{
						cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                        cout<<"\n~~~~~~~[_____Welcome To Japan Airlines_____]~~~~~~";
						cout<<"\n```````````````````````````````````````````````````";
                        cout<<"\n** Following are the flights available to Japan **\n";
						cout<<"```````````````````````````````````````````````````"<<endl;
						
						cout<<"1. JP - 698"<<endl;
						cout<<"\t018-01-2024 9:00AM 20hrs Rs. 44000"<<endl<<endl;
						cout<<"2. JP - 158"<<endl;
						cout<<"\t019-01-2024 4:00AM 22hrs Rs. 34000"<<endl<<endl;
						cout<<"3. JP - 708"<<endl;
						cout<<"\t17-01-2024 10:00AM 21hrs Rs. 42000"<<endl<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>ch1;
						
						if(ch1==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight JP - 498"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						
						else if(ch1==2)
						{
							charges=34000;
							cout<<"\nYou have successfully booked the flight JP - 658"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						else if(ch1==3)
						{
							charges=42000;
							cout<<"\nYou have successfully booked the flight JP - 508"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu..!"<<endl;
							flights();
						}
						
						cout<<"\nPress any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
                    case 6:
					{
						cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                        cout<<"\n~~~~~~~[_____Welcome To New-Zealand Airlines_____]~~~~~~";
						cout<<"\n````````````````````````````````````````````````````````";
                        cout<<"\n** Following are the flights available to NewZealand **\n";
						cout<<"````````````````````````````````````````````````````````"<<endl;				
						cout<<"1. NZ - 898"<<endl;
						cout<<"\t02-01-2024 2:00AM 18hrs Rs. 36000"<<endl<<endl;
						cout<<"2. NZ - 958"<<endl;
						cout<<"\t03-01-2024 6:00AM 19hrs Rs. 37000"<<endl<<endl;
						cout<<"3. NZ - 608"<<endl;
						cout<<"\t12-01-2024 10:00AM 20hrs Rs. 31000"<<endl<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>ch1;
						
						if(ch1==1)
						{
							charges=36000;
							cout<<"\nYou have successfully booked the flight NZ - 898"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						
						else if(ch1==2)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight NZ - 958"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						else if(ch1==3)
						{
							charges=31000;
							cout<<"\nYou have successfully booked the flight NZ - 608"<<endl;
                            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu..!"<<endl;
							flights();
						}
						
						cout<<"\nPress 1 key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
                    default :
						{
							cout<<"Invalid input , shifting to the previous menu..!"<<endl;
							mainMenu();
							break;
						}
				
            }
         }
};
float Registration::charges;
int Registration::ch;
class ticket : public Registration, Details
{
	public:
		
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				cout<<"\t ______________________________________\n\t|                                      |";
		cout<<"\n\t|             JSPM Airlines            |"<<endl;
		cout<<"\t|______________________________________|\n\t|                                      |";
	cout<<"\n\t|________________Ticket________________|\n\t|                                      |"<<endl;
	cout<<"\t|______________________________________|"<<endl;
				
				outf<<setw(15)<<left<<"\nCustomer ID:"<<setw(20)<<Details::cID<<endl;
				outf<<setw(15)<<left<<"Customer Name:"<<setw(20)<<Details::name<<endl;
				outf<<setw(15)<<left<<"Customer Gender:"<<setw(20)<<Details::gender<<endl;
				outf<<setw(15)<<left<<"\n\tDescription"<<setw(20)<<endl<<endl;
				
				if(Registration::ch==1)
				{
					destination="Dubai";
				}
				
				else if(Registration::ch==2)
				{
					destination="Australia";
				}
				else if(Registration::ch==3)
				{
					destination="Russia";
				}
				else if(Registration::ch==4)
				{
					destination="Singapore";
				}
				else if(Registration::ch==5)
				{
					destination="Japan";
				}
				else if(Registration::ch==6)
				{
					destination="New-Zealand";
				}
				
				outf<<"\tDestination :"<<destination<<endl;
				outf<<"\tFlight cost :"<<Registration::charges<<endl;
				
			}
			outf.close();
			
		}
        void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}

};
void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	
	
	
	
	Details d;
	Registration r;
	ticket t;
    do{
		cout<<"\t__________________________________________________\n";
		cout<<"\t|                                                 |\n\t|                    JSPM Airlines                |"<<endl;
		cout<<"\t|_________________________________________________|\n";
	cout<<"\t|                                                 |\n\t|"<<"~~~~~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~~~~~~|"<<endl;
	
	cout<<"\t|_________________________________________________|"<<endl;;
	cout<<"\t|\t\t\t\t\t\t  |" <<endl;
	
	cout<<"\t|\t Press 1 : To add the Customer Details    |"<<endl;
	cout<<"\t|\t Press 2 : For Flight Registration        |"<<endl;
	cout<<"\t|\t Press 3 : For Ticket and Charges         |"<<endl;
	cout<<"\t|\t Press 4 : To Exit                        |"<<endl;
	cout<<"\t|\t\t\t\t\t\t  |" <<endl;
	cout<<"\t|_________________________________________________|"<<endl;
		cout<<"\nEnter the choice : ";
	    cin>>lchoice;
	
	switch(lchoice)
	{
		
		case 1:
			{
			   cout<<"\n#######################################"<<endl;
			   cout<<"\n[__________Customers Details__________]\n"<<endl;
			   cout<<"\n#######################################"<<endl;
			   	d.info();
			   	cout<<"Press any key to go back to Main menu :";
			   	cin>>back;
			   	
			   	if(back==1)
			   	{
			   		mainMenu();
				   }
				   else
				   {
				   	mainMenu();
				   }
				   break;
			}
			
			case 2:
				{
					cout<<"\n````````````````````````````````````````````````````````"<<endl;
					cout<<"````````````Book a flight using this system`````````````\n";
					cout<<"````````````````````````````````````````````````````````"<<endl;
					r.flights();
					break;
				}
				
		  case 3:
					{
					
				cout<<"\t\t[_____GET YOUR TICKET____]\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket :";
				
				cin>>back;
				
					if(back==1)
					{
						t.dispBill();
						cout<<"Press any key to go back to main menu:";
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						
					}
					else
					{
						mainMenu();
					}
					break;
				}
		
		case 4:
			{
				lchoice = 4;
				cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				cout<<setw(20)<<left<<"\n[_________Thank-you_________]";
				cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				exit(0);

			}
			
		default :
				{
					cout<<"Invalid input, Please try again!\n"<<endl;
					mainMenu();
				
				}
	}
    }while(lchoice!=4);
	
	
	
	
}




int main()
{
	Management Mobj;
	return 0;
}
