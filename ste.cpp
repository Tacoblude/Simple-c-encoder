#include <iostream>
#include <string>
//substution chyper encryption
std::string ssce(std::string text){
std::string output; char a, out; int length;
length = text.length();
for(int i=0;i<length;i++){
a = text[i];
if(a=='a' || a=='A'){out='h';}
else if(a=='b' || a=='B'){out='G';}
else if(a=='c' || a=='C'){out='O';}
else if(a=='d' || a=='D'){out=')';}
else if(a=='e' || a=='E'){out='&';}
else if(a=='f' || a=='F'){out=';';}
else if(a=='g' || a=='G'){out='T';}
else if(a=='h' || a=='H'){out='0';}
else if(a=='i' || a=='I'){out='P';}
else if(a=='j' || a=='J'){out='d';}
else if(a=='k' || a=='K'){out='F';}
else if(a=='l' || a=='L'){out='-';}
else if(a=='m' || a=='M'){out='x';}
else if(a=='n' || a=='N'){out='E';}
else if(a=='o' || a=='O'){out='J';}
else if(a=='p' || a=='P'){out='+';}
else if(a=='q' || a=='Q'){out='p';}
else if(a=='r' || a=='R'){out='=';}
else if(a=='s' || a=='S'){out='#';}
else if(a=='t' || a=='T'){out='/';}
else if(a=='u' || a=='U'){out='k';}
else if(a=='v' || a=='V'){out='K';}
else if(a=='w' || a=='W'){out='Y';}
else if(a=='x' || a=='X'){out='i';}
else if(a=='y' || a=='Y'){out='!';}
else if(a=='z' || a=='Z'){out='U';}
else if(a==' '){out='[';}
else if(a=='1'){out='S';}
else if(a=='2'){out='N';}
else if(a=='3'){out='(';}
else if(a=='4'){out='e';}
else if(a=='5'){out='*';}
else if(a=='6'){out='"';}
else if(a=='7'){out='j';}
else if(a=='8'){out='A';}
else if(a=='9'){out='_';}
else if(a=='0'){out=']';}
else if(a=='!'){out='a';}
else if(a=='"'){out='B';}
else if(a=='#'){out='o';}
else if(a=='%'){out='X';}
else if(a=='&'){out='H';}
else if(a=='/'){out='y';}
else if(a=='('){out='?';}
else if(a=='?'){out='<';}
else if(a==')'){out='>';}
else if(a=='='){out='|';}
else if(a==','){out='f';}
else if(a=='.'){out='g';}
else if(a=='-'){out='z';}
else if(a=='_'){out='s';}
else if(a==':'){out=':';}
else if(a==';'){out='t';}
else{std::cout <<"char not supported\n"; exit(0);}output=output+out;}return output;}
//substution chyper decryption
std::string sscd(std::string text){
std::string output; char a, out; int length;
length = text.length();
for(int i=0;i<length;i++){
a = text[i];
if(a=='h'){out='a';}
else if(a=='G'){out='b';}
else if(a=='O'){out='c';}
else if(a==')'){out='d';}
else if(a=='&'){out='e';}
else if(a==';'){out='f';}
else if(a=='T'){out='g';}
else if(a=='0'){out='h';}
else if(a=='P'){out='i';}
else if(a=='d'){out='j';}
else if(a=='F'){out='k';}
else if(a=='-'){out='l';}
else if(a=='x'){out='m';}
else if(a=='E'){out='n';}
else if(a=='J'){out='o';}
else if(a=='+'){out='p';}
else if(a=='p'){out='q';}
else if(a=='='){out='r';}
else if(a=='#'){out='s';}
else if(a=='/'){out='t';}
else if(a=='k'){out='u';}
else if(a=='K'){out='v';}
else if(a=='Y'){out='w';}
else if(a=='i'){out='x';}
else if(a=='!'){out='y';}
else if(a=='U'){out='z';}
else if(a=='['){out=' ';}
else if(a=='S'){out='1';}
else if(a=='N'){out='2';}
else if(a=='('){out='3';}
else if(a=='e'){out='4';}
else if(a=='*'){out='5';}
else if(a=='"'){out='6';}
else if(a=='j'){out='7';}
else if(a=='A'){out='8';}
else if(a=='_'){out='9';}
else if(a==']'){out='0';}
else if(a=='a'){out='!';}
else if(a=='B'){out='"';}
else if(a=='o'){out='#';}
else if(a=='X'){out='%';}
else if(a=='H'){out='&';}
else if(a=='y'){out='/';}
else if(a=='?'){out='(';}
else if(a=='<'){out='?';}
else if(a=='>'){out=')';}
else if(a=='|'){out='=';}
else if(a=='f'){out=',';}
else if(a=='g'){out='.';}
else if(a=='z'){out='-';}
else if(a=='s'){out='_';}
else if(a==':'){out=':';}
else if(a=='t'){out=';';}
else{std::cout <<"char not supported\n"; exit(0);}output=output+out;}return output;}
//password encryption
std::string spe(std::string text, std::string pass){
std::string output; char a, b, out; int length, length1;
length = text.length();
length1 = pass.length();
for(int j=0; j<length1;i++ ){
b = pass[j];
}
}
