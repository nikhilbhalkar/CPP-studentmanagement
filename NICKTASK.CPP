//CPP task of nextech- nikhil

#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>

class person
{
public:
	char nm[20];
	char ei[20];
	char add[30];
	int mn[10];
	int i;
	void getinfo()
	{
		cout << "\n Enter The Name=";
		gets(nm);
		cout << " \n Enter email id=";
		gets(ei);
		cout << " \n Enter address=";
		gets(add);
		cout << " \n Enter mobile number=";
		for (int i = 0; i < 10; i++)
		{
			cin >> mn[i];
		}
	}
	void showinfo()
	{
		cout << " \n Name is=" << nm;
		cout << " \n Email id is=" << ei;
		cout << " \n Addres is=" << add;
		cout << " \n Mobilr number is=";
		for (int i = 0; i < 10; i++)
		{
			cout << mn[i] << " ";
		}
	}
};
class student : public person
{

	/*   public :
		int prn[9];
		char cn[30];
		void getinfo()
		{
		cout<<" \n Enter collegr name=";
		gets(cn);
		cout<<" \n Enter the PRN=";
		cin>>prn[9];
		}
		void showinfo()
		{
		  cout<<" \n College name is="<<cn;
		  cout<<" \nPRN is="<<prn;
		}
	  */
};
class bsc : public student
{
};
class fybsc : public bsc
{
};
class sybsc : public bsc
{
};
class tybsc : public bsc
{
};
class bca : public student
{
};
class fybca : public bca
{
};
class sybca : public bca
{
};
class tybca : public bca
{
};
class btech : public student
{
};
class fybtech : public btech
{
};
class sybtech : public btech
{
};
class tybtech : public btech
{
};
class bebtech : public btech
{
};
//Employe remain
void main()
{
	int fno;
	char n;
	fybsc bsc1;
	sybsc bsc2;
	tybsc bsc3;

	fybca bca1;
	sybca bca2;
	tybca bca3;

	fybtech btech1;
	sybtech btech2;
	tybtech btech3;
	bebtech btech4;
	clrscr();
	do
	{
	mainmenu:
		clrscr();
		cout << " \n 1.Student";
		cout << "\n 2.Teacher";
		cout << "\n3.Exit";
		cout << "\nEnter your choice";
		cin >> fno;
		switch (fno)
		{
		case 1:
			do
			{
			submenu:
				clrscr();
				cout << "\n1.Bsc";
				cout << "\n2.Bca";
				cout << "\n3.Btech";
				cout << "\n4.Exit";
				cout << "\n5.Main menu";
				cout << "\nEnter your choice";
				cin >> fno;
				switch (fno)
				{
				case 1:
					do
					{
						clrscr();
						cout << "\n1.FyBsc";
						cout << "\n2.SyBsc";
						cout << "\n3.TyBsc";
						cout << "\n4.Exit";
						cout << "\n5.Main menu";
						cout << "\n6.Back Menu";
						cout << "\nEnter your choice";
						cin >> fno;
						switch (fno)
						{
						case 1:
							do
							{
								clrscr();
								cout << "\n1.Insert Information";
								cout << "\n2.Show Information";
								cout << "\n3.ModifyInformation";
								cout << "\n4.Exit";
								cout << "\n5.Main menu";
								cout << "\nEnter your choice";
								cin >> fno;
								switch (fno)
								{

								case 1:
									bsc1.getinfo();
									break;
								case 2:
									bsc1.showinfo();
									break;
								case 3:
									bsc1.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;
									
								default:
									cout << "\n Enter valid number";
								}
								cout << "\n To countinue enter(y \ n )";
								cin >> n;
							} while (n == 'y' || n == 'Y');
							break;
						case 2:
							do
							{
								clrscr();
								cout << "\n1.Insert Information";
								cout << "\n2.Show Information";
								cout << "\n3.Modify Information";
								cout << "\n4.Exit";
								cout << "\n5.Main menu";
								cout << "\nEnter your choice";
								cin >> fno;
								switch (fno)
								{

								case 1:
									bsc2.getinfo();
									break;
								case 2:
									bsc2.showinfo();
									break;
								case 3:
									bsc2.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;
									
								default:
									cout << "\n Enter valid number";
								}
								cout << "\n To countinue enter(y \ n)";
								cin >> n;
							} while (n == 'y' || n == 'Y');
							break;

						case 3:
							do
							{
								clrscr();
								cout << "\n1.Insert Information";
								cout << "\n2.Show Information";
								cout << "\n3.Modify Information";
								cout << "\n4.Exit";
								cout << "\n5.Main menu";
								cout << "\nEnter your choice";
								cin >> fno;
								switch (fno)
								{

								case 1:
									bsc3.getinfo();
									break;
								case 2:
									bsc3.showinfo();
									break;
								case 3:
									bsc3.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;
									
								default:
									cout << "\n Enter valid number";
								}
								cout << "\n To countinue enter(y \ n )";
								cin >> n;
							} while (n == 'y' || n == 'Y');
							break;

						case 4:
							exit(0);
						case 5:
							goto mainmenu;
						case 6:
							goto submenu;
						default:
							cout << "\n Enter valid number";
							break;
						}
						cout << "\n To countinue enter(y \ n )";
						cin >> n;
					} while (n == 'y' || n == 'Y');
					break;
				case 2:
					do
					{
						clrscr();
						cout << "\n1.FyBca";
						cout << "\n2.SyBca";
						cout << "\n3.TyBca";
						cout << "\n4.Exit";
						cout << "\n5.Main menu";
						cout << "\n6.Back Menu";
						cout << "\nEnter your choice";
						cin >> fno;
						switch (fno)
						{
						case 1:
							do
							{
								clrscr();
								cout << "\n1.Insert Information";
								cout << "\n2.Show Information";
								cout << "\n3.Modify Information";
								cout << "\n4.Exit";
								cout << "\n5.Main menu";
								cout << "\nEnter your choice";
								cin >> fno;
								switch (fno)
								{

								case 1:
									bca1.getinfo();
									break;
								case 2:
									bca1.showinfo();
									break;
								case 3:
									bca1.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;
									
								default:
									cout << "\n Enter valid number";
								}
								cout << "\n To	countinue enter(y \ n) "; 
								cin >>n;
							} while (n == 'y' || n == 'Y');
							break;
						case 2:
							do
							{
								clrscr();
								cout << "\n1.Insert Information";
								cout << "\n2.Show Information";
								cout << "\n3.Modify Information";
								cout << "\n4.Exit";
								cout << "\n5.Main menu";
								cout << "\nEnter your choice";
								cin >> fno;
								switch (fno)
								{

								case 1:
									bca2.getinfo();
									break;
								case 2:
									bca2.showinfo();
									break;
								case 3:
									bca2.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;
									
								default:
									cout << "\n Enter valid number";
								}
								cout << "\n To countinue enter(y \ n )";
								cin >> n;
							} while (n == 'y' || n == 'Y');
							break;
						case 3:
							do
							{
								clrscr();
								cout << "\n1.Insert Information";
								cout << "\n2.Show Information";
								cout << "\n3.Modify Information";
								cout << "\n4.Exit";
								cout << "\n5.Main menu";
								cout << "\nEnter your choice";
								cin >> fno;
								switch (fno)
								{

								case 1:
									bca3.getinfo();
									break;
								case 2:
									bca3.showinfo();
									break;
								case 3:
									bca3.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;
									
								default:
									cout << "\n Enter valid number";
								}
								cout << "\n To countinue enter(y \ n)";
								cin >> n;
							} while (n == 'y' || n == 'Y');
							break;
						case 4:
							exit(0);
						case 5:
							goto mainmenu;
						case 6:
							goto submenu;
						default:
							cout << "\n Enter valid number";
							break;
						}
						cout << "\n To countinue enter(y \ n )";
						cin >> n;
					} while (n == 'y' || n == 'Y');
					break;
				case 3:
					do
					{
						clrscr();
						cout << "\n1.FyBtech";
						cout << "\n2.SyBtech";
						cout << "\n3.TyBtech";
						cout << "\n4.BeBtech";
						cout << "\n5.Exit";
						cout << "\n6.Main menu";
						cout << "\n7.Back Menu";
						cout << "\nEnter your choice";
						cin >> fno;
						switch (fno)
						{
						case 1:
							do
							{
								clrscr();
								cout << "\n1.Insert Information";
								cout << "\n2.Show Information";
								cout << "\n3.Modify Information";
								cout << "\n4.Exit";
								cout << "\n5.Main menu";
								cout << "\nEnter you choice";
								cin >> fno;
								switch (fno)
								{

								case 1:
									btech1.getinfo();
									break;
								case 2:
									btech1.showinfo();
									break;
								case 3:
									btech1.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;
									
								default:
									cout << "\nEnter valid number";
								}
								cout << "\n Tocountinue enter(y / n )";
								cin >> n;
							} while (n == 'y' || n == 'Y');
							break;
						case 2:
							do
							{
								clrscr();
								cout << "\n1.Insert Information";
								cout << "\n2.Show Information";
								cout << "\n3.Modify Information";
								cout << "\n4.Exit";
								cout << "\n5.Main menu";
								cout << "\nEnter your choice";
								cin >> fno;
								switch (fno)
								{

								case 1:
									btech2.getinfo();
									break;
								case 2:
									btech2.showinfo();
									break;
								case 3:
									btech2.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;
									
								default:
									cout << "\n Enter valid number";
								}
								cout << "\n To countinue enter(y \ n)";
								cin >> n;
							} while (n == 'y' || n == 'Y');
							break;
						case 3:
							do
							{
								clrscr();
								cout<< "\n1.Insert ormation ";
								cout<< "\n2.Show Information ";
								cout<< "\n3.Modify Information ";
								cout<< "\n4.Exit";
								cout << "\n5.Main menu ";
								cout << "\nEnter your choice ";
								cin >>fno;
								switch (fno)
								{

								case 1:
									btech3.getinfo();
									break;
								case 2:
									btech3.showinfo();
									break;
								case 3:
									btech3.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;

								default:
									cout<< "\nEnter valid number ";
								}
								cout << "\nTo countinueenter(y	\ n) ";
								cin >>n;
							} while (n == 'y' || n == 'Y');
							break;
						case 4:
							do
							{
								clrscr();
								cout<< "\n1.Insert Information ";
								cout<< "\n2.Show Information ";
								cout<< "\n3.Modify Information ";
								cout<< "\n4.Exit";
								cout << "\n5.Mainmenu ";
								cout<< "\nEnter your choice ";
								cin >>fno;
								switch (fno)
								{

								case 1:
									btech4.getinfo();
									break;
								case 2:
									btech4.showinfo();
									break;
								case 3:
									btech4.getinfo();
									break;
								case 4:
									exit(0);
									

								case 5:
									goto mainmenu;

								default:
									cout<< "\nEnter	valid	number ";
								}
								cout << "\n	To countinue enter(y/n) ";
								cin >>n;
							} while (n == 'y' || n == 'Y');
							break;
						case 5:
							exit(0);
						case 6:
							goto mainmenu;
						case 7:
							goto submenu;
						default:
							cout
								<< "\n	Enter	valid	number ";
								break;
						}
						cout << "\n	To	countinue enter(y/  n) ";
						cin >>	n;
					} while (n == 'y' || n == 'Y');
					break;
				case 4:
					exit(0);
				case 5:
					goto mainmenu;
				default:
					cout<< "\nEnter	valid number ";
						break;
				}
				cout << "\n	Tocountinue enter(y/ n) ";
				cin >>n;
			} while (n == 'y' || n == 'Y');
			break;
		case 2:
			break;
		case 3:
			exit(0);
		default:
			cout<< "\nEnter valid number ";
		}
		cout << "+To countinue enter(y /n) ";
		cin >>	n;

	} while (	n =='y' ||	n =='Y');
	getch();
}