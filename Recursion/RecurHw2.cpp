#include <iostream> //print all mul tables of a  num
using namespace std;
void print_table(int num)
{
static int num1=num;
static int i=1;
if(i==10){
  cout<<num<<endl;
  return ;
} 
cout<<num<<endl;
i++;
print_table(num+num1);

}
int main()
{
  int num;
  cin >> num;
  print_table(num);

  return 0;
}