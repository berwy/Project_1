#include <iostream>
using namespace std;
// PROJECTS_1

#include <iostream>
#include <cmath>
using namespace std;
int S_Triangle_angle()  

{
 int a, b, y, S;
  cout << "Trijstūra pamats ir ";
  cin >> a;
  cout << "Trijstūra sānu mala ir ";
  cin >> b;
  cout << "Trijstura leņķa vērtība ir ";
  cin >> y;
  S=a*b*sin(y)/2;
  return S;
}

void  pri(int S) 
{
  cout << "Trijstūra laukums ir " << S << endl;
}

int main() 
{
  int S;
  S=S_Triangle_angle();    
  pri(S);       
  
  return 0;
}


int main() {
  cout << "Programma pieprasa figūras elementus un aprēķina to laukumu. \n";
  cout << " Nospiediet burtu:\n";
  cout << "T  - ja figūra trijstūris" << endl;
  cout << "Tr  - ja figūra trapece" << endl;
  cout << "P  - ja figūra paralelograms" << endl;
  cout << "Ta  - ja figūra tainstūris" << endl;
  cout << "K  - ja figūra kvadrāts" << endl;
  cout << "R  - ja figūra riņķis" << endl;
  cout << "_____________________________________" << endl;
  cout << endl;

  string user_answer;
  cin >> user_answer;

  if (user_answer=="K" || user_answer=="k")
  {
    Square();
  }
  
  if (user_answer=="Ta"|| user_answer=="ta")
  {
    Rectangle();
  }

  if (user_answer=="Tr"|| user_answer=="tr")
  {
    int Trapeze();
    {
    cout << "lai uzzināt Tr laukumu uzraksti augstumu un pamati" << endl ;
    int h,a;
    cin >> h ;
    cin >> a ;
    int STr=a*h;
    cout << STr ;
    return STr;}
  }

  if (user_answer=="R"|| user_answer=="r")
  {
    Circle();
  }

  if (user_answer=="T"|| user_answer=="t")
  {
    cout << "Vai zinams trijstūra leņkis? Nospiediet 1, ja zinams, ja nē nospiediet 2" << endl;
    int atb;
    cin >> atb;
    if (atb ==1 ) { Triangle_angle ()}
      else {Triangle()}
  }

   if (user_answer=="P"|| user_answer=="p")
  {
    cout << "Vai zinams paralelograma leņkis? Nospiediet 1, ja zinams, ja nē nospiediet 2" << endl;
    int atb;
    cin >> atb;
    if (atb ==1 ) { Paraleloram_angle ()}
      else {Paraleloram()}
  }
  return 0;
}
