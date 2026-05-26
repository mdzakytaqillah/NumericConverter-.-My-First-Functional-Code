#include<iostream>
#include<sstream>
using namespace std;

int main(){
	char option, afteraction;
	menu:
		cout<<"=================================================="<<endl;
		cout<<"||\tProgram Konversi Sistem Bilangan\t||"<<endl;
		cout<<"-----------------------MENU-----------------------"<<endl;
		cout<<"~~~~ a. Decimal to Binary, Octal, Hexadecimal ~~~~"<<endl;
		cout<<"~~~~ b. Binary to Decimal, Octal, Hexadecimal ~~~~"<<endl;
		cout<<"~~~~ c. Octal to Decimal, Binary, Hexadecimal ~~~~"<<endl;
		cout<<"~~~~ d. Hexadecimal to Decimal, Binary, Octal ~~~~"<<endl;
		cout<<"------------Choose one option(a/b/c/d)------------"<<endl;
		cin>>option;
		if(option=='a'){
			repeatdec:
				int desimal, sisa1, sisa2, sisa3;
				string hasil1, hasil2, hasil3, temp1, temp2, temp3;
				cout<<"Masukkan bilangan desimal = ";
				cin>>desimal;
				cout<<"--------------------------------------------------"<<endl;
				cout<<"Decimal (10)\t\t= "<<desimal<<endl;
				
				for(int a = desimal; a > 0; a /= 2){
					stringstream bit;
					sisa1 = a % 2;
					bit<<sisa1;
					bit>>temp1;
					hasil1 += temp1;
				}
				
				cout<<"Binary (2)\t\t= ";
				for(int b = hasil1.length()-1; b >= 0; b--){
					cout<<hasil1[b];
				}
				cout<<endl;
				
				for(int c = desimal; c > 0; c /= 8){
					stringstream bit;
					sisa2 = c % 8;
					bit<<sisa2;
					bit>>temp2;
					hasil2 += temp2;
				}
				cout<<"Octal (8)\t\t= ";
				for(int d = hasil2.length()-1; d >= 0; d--){
					cout<<hasil2[d];
				}
				cout<<endl;
				
				for(int e = desimal; e > 0; e /= 16){
					stringstream bit;
					sisa3 = e % 16;
					if(sisa3==10){
						hasil3 += "A";
						continue;
					}else if(sisa3==11){
						hasil3 += "B";
						continue;
					}else if(sisa3==12){
						hasil3 += "C";
						continue;
					}else if(sisa3==13){
						hasil3 += "D";
						continue;
					}else if(sisa3==14){
						hasil3 += "E";
						continue;
					}else if(sisa3==15){
						hasil3 += "F";
						continue;
					}
					bit<<sisa3;
					bit>>temp3;
					hasil3 += temp3;
				}
				cout<<"Hexadecimal (16)\t= ";
				for(int f = hasil3.length()-1; f >= 0; f--){
					cout<<hasil3[f];
				}
				cout<<endl;
				cout<<endl;
				
				cout<<"--------------------------------------------------"<<endl;
				cout<<"~~~~~~~a. Jalankan Konversi Desimal Kembali~~~~~~~"<<endl;
				cout<<"~~~~~~~      b. Kembali ke Menu Awal       ~~~~~~~"<<endl;
				cout<<"--------------Choose one option(a/b)--------------"<<endl;
				cin>>afteraction;
				cout<<"--------------------------------------------------"<<endl;
				if(afteraction=='a'){
					goto repeatdec;
				}else if(afteraction=='b'){
					goto menu;
				}
			
		}else if(option=='b'){
			repeatbin:
				int biner, desimal=0, i=1, sisa1, sisa2, sisa3;
				string hasil2, hasil3, temp2, temp3;
				
    			cout<<"Masukkan bilangan biner = ";
    			cin>>biner;
				cout<<"--------------------------------------------------"<<endl;
				cout<<"Binary (2)\t\t= "<<biner<<endl;
				
				while(biner!=0){
					sisa1 = biner % 10;
					desimal = desimal + (sisa1*i);
					i = i*2;
    				biner = biner/10;
    			}
				cout<<"Decimal (10)\t\t= "<<desimal<<endl;
				
				for(int c = desimal; c > 0; c /= 8){
					stringstream bit;
					sisa2 = c % 8;
					bit<<sisa2;
					bit>>temp2;
					hasil2 += temp2;
				}
				cout<<"Octal (8)\t\t= ";
				for(int d = hasil2.length()-1; d >= 0; d--){
					cout<<hasil2[d];
				}
				cout<<endl;
			
				for(int e = desimal; e > 0; e /= 16){
					stringstream bit;
					sisa3 = e % 16;
					if(sisa3==10){
						hasil3 += "A";
						continue;
					}else if(sisa3==11){
						hasil3 += "B";
						continue;
					}else if(sisa3==12){
						hasil3 += "C";
						continue;
					}else if(sisa3==13){
						hasil3 += "D";
						continue;
					}else if(sisa3==14){
						hasil3 += "E";
						continue;
					}else if(sisa3==15){
						hasil3 += "F";
						continue;
					}
					bit<<sisa3;
					bit>>temp3;
					hasil3 += temp3;
				}
				cout<<"Hexadecimal (16)\t= ";
				for(int f = hasil3.length()-1; f >= 0; f--){
					cout<<hasil3[f];
				}
				cout<<endl;
				cout<<endl;
				
				cout<<"--------------------------------------------------"<<endl;
				cout<<"~~~~~~~~a. Jalankan Konversi Biner Kembali~~~~~~~~"<<endl;
				cout<<"~~~~~~~      b. Kembali ke Menu Awal       ~~~~~~~"<<endl;
				cout<<"--------------Choose one option(a/b)--------------"<<endl;
				cin>>afteraction;
				cout<<"--------------------------------------------------"<<endl;
				if(afteraction=='a'){
					goto repeatbin;
				}else if(afteraction=='b'){
					goto menu;
				}
		
		}else if(option=='c'){
			repeatoct:
				int oktal, desimal=0, i=1, sisa1, sisa2, sisa3;
				string hasil2, hasil3, temp2, temp3;
			
    			cout<<"Masukkan bilangan oktal = ";
    			cin>>oktal;
				cout<<"--------------------------------------------------"<<endl;
				cout<<"Octal (8)\t\t= "<<oktal<<endl;
				
				while(oktal!=0){
					sisa1 = oktal % 10;
					desimal = desimal + (sisa1*i);
					i = i*8;
    				oktal = oktal/10;
    			}
				cout<<"Decimal (10)\t\t= "<<desimal<<endl;
			
				for(int a = desimal; a > 0; a /= 2){
					stringstream bit;
					sisa2 = a % 2;
					bit<<sisa2;
					bit>>temp2;
					hasil2 += temp2;
				}
				cout<<"Binary (2)\t\t= ";
				for(int b = hasil2.length()-1; b >= 0; b--){
					cout<<hasil2[b];
				}
				cout<<endl;
				
				for(int e = desimal; e > 0; e /= 16){
					stringstream bit;
					sisa3 = e % 16;
					if(sisa3==10){
						hasil3 += "A";
						continue;
					}else if(sisa3==11){
						hasil3 += "B";
						continue;
					}else if(sisa3==12){
						hasil3 += "C";
						continue;
					}else if(sisa3==13){
						hasil3 += "D";
						continue;
					}else if(sisa3==14){
						hasil3 += "E";
						continue;
					}else if(sisa3==15){
						hasil3 += "F";
						continue;
					}
					bit<<sisa3;
					bit>>temp3;
					hasil3 += temp3;
				}
				cout<<"Hexadecimal (16)\t= ";
				for(int f = hasil3.length()-1; f >= 0; f--){
					cout<<hasil3[f];
				}
				cout<<endl;
				cout<<endl;
				
				cout<<"--------------------------------------------------"<<endl;
				cout<<"~~~~~~~~a. Jalankan Konversi Oktal Kembali~~~~~~~~"<<endl;
				cout<<"~~~~~~~      b. Kembali ke Menu Awal       ~~~~~~~"<<endl;
				cout<<"--------------Choose one option(a/b)--------------"<<endl;
				cin>>afteraction;
				cout<<"--------------------------------------------------"<<endl;
				if(afteraction=='a'){
					goto repeatoct;
				}else if(afteraction=='b'){
					goto menu;
				}
			
		}else if(option=='d'){
			repeathex:
				int desimal, sisa1, sisa2, sisa3;
				string hasil1, hasil2, hasil3, temp1, temp2, temp3;
				
				cout<<"Masukkan bilangan heksadesimal = ";
				cin>>hex>>desimal;
				cout<<"--------------------------------------------------"<<endl;
				for(int e = desimal; e > 0; e /= 16){
					stringstream bit;
					sisa3 = e % 16;
					if(sisa3==10){
						hasil3 += "A";
						continue;
					}else if(sisa3==11){
						hasil3 += "B";
						continue;
					}else if(sisa3==12){
						hasil3 += "C";
						continue;
					}else if(sisa3==13){
						hasil3 += "D";
						continue;
					}else if(sisa3==14){
						hasil3 += "E";
						continue;
					}else if(sisa3==15){
						hasil3 += "F";
						continue;
					}
					bit<<sisa3;
					bit>>temp3;
					hasil3 += temp3;
				}
				cout<<"Hexadecimal (16)\t= ";
				for(int f = hasil3.length()-1; f >= 0; f--){
					cout<<hasil3[f];
				}
				cout<<endl;
				
				cout<<"Decimal (10)\t\t= "<<desimal<<endl;
				
				for(int a = desimal; a > 0; a /= 2){
					stringstream bit;
					sisa1 = a % 2;
					bit<<sisa1;
					bit>>temp1;
					hasil1 += temp1;
				}
				
				cout<<"Binary (2)\t\t= ";
				for(int b = hasil1.length()-1; b >= 0; b--){
					cout<<hasil1[b];
				}
				cout<<endl;
				
				for(int c = desimal; c > 0; c /= 8){
					stringstream bit;
					sisa2 = c % 8;
					bit<<sisa2;
					bit>>temp2;
					hasil2 += temp2;
				}
				cout<<"Octal (8)\t\t= ";
				for(int d = hasil2.length()-1; d >= 0; d--){
					cout<<hasil2[d];
				}
				cout<<endl;
				cout<<endl;
				
				cout<<"--------------------------------------------------"<<endl;
				cout<<"~~~~a.  Jalankan Konversi Heksadesimal Kembali~~~~"<<endl;
				cout<<"~~~~~~~      b. Kembali ke Menu Awal       ~~~~~~~"<<endl;
				cout<<"--------------Choose one option(a/b)--------------"<<endl;
				cin>>afteraction;
				cout<<"--------------------------------------------------"<<endl;
				if(afteraction=='a'){
					goto repeathex;
				}else if(afteraction=='b'){
					goto menu;
				}
		}
}
