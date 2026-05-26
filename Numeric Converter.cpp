#include<iostream>
#include<sstream>
using namespace std;

class Dec {
	private:
		int dec, sisa1, sisa2, sisa3;
		string hasil1, hasil2, hasil3, temp1, temp2, temp3;
	
	public:
	void DecToBin(int dec) {
		for(int a = dec; a > 0; a /= 2){
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
	}
	
	void DecToOct(int dec) {
		for(int c = dec; c > 0; c /= 8){
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
	}
	
	void DecToHex(int dec) {
		for(int e = dec; e > 0; e /= 16){
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
	}
};

class Bin {
	private:
		int bin, i=1, sisa1;
	
	public:
	int dec=0;
	void BinToDec(int bin) {
		while(bin!=0){
			sisa1 = bin % 10;
			dec = dec + (sisa1*i);
			i = i*2;
    		bin = bin/10;
    	}
		cout<<"Decimal (10)\t\t= "<<dec<<endl;
	}
};

class Oct {
	private:
		int oct, i=1, sisa1;
	
	public:
	int dec=0;
	void OctToDec(int oct) {
		while(oct!=0){
			sisa1 = oct % 10;
			dec = dec + (sisa1*i);
			i = i*8;
    		oct = oct/10;
    	}
		cout<<"Decimal (10)\t\t= "<<dec<<endl;
	}
};

int main() {
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
				int desimal;
				Dec d;
				cout<<"Masukkan bilangan desimal = ";
				cin>>desimal;
				cout<<"--------------------------------------------------"<<endl;
				cout<<"Decimal (10)\t\t= "<<desimal<<endl;
				
				d.DecToBin(desimal);
				d.DecToOct(desimal);
				d.DecToHex(desimal);
				
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
				int biner;
				Bin b;
				Dec bd;
    			cout<<"Masukkan bilangan biner = ";
    			cin>>biner;
				cout<<"--------------------------------------------------"<<endl;
				cout<<"Binary (2)\t\t= "<<biner<<endl;
				
				b.BinToDec(biner);
				bd.DecToOct(b.dec);
				bd.DecToHex(b.dec);
				
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
				int oktal;
				Oct o;
				Dec od;
			
    			cout<<"Masukkan bilangan oktal = ";
    			cin>>oktal;
				cout<<"--------------------------------------------------"<<endl;
				cout<<"Octal (8)\t\t= "<<oktal<<endl;
				
				o.OctToDec(oktal);
				od.DecToBin(o.dec);
				od.DecToHex(o.dec);
				
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
				int decimal;
				Dec hd;
				
				cout<<"Masukkan bilangan heksadesimal = ";
				cin>>hex>>decimal;
				cout<<"--------------------------------------------------"<<endl;
				hd.DecToHex(decimal);
				
				cout<<"Decimal (10)\t\t= "<<decimal<<endl;
				hd.DecToBin(decimal);
				hd.DecToOct(decimal);
				
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
