#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
int main(){
vector<int>vec;

vec.push_back(3);
vec.push_back(24);
vec.push_back(32);
vec.push_back(83);
vec.push_back(33);
vec.push_back(39);
vec.push_back(653);
vec.push_back(30);
for(int i=0;i<vec.size();i++)
{
    cout<<vec[i]<<" ";
}
cout<<endl;
// vec.pop_back();
// for(int i=0;i<vec.size();i++)
// {
//     cout<<vec[i]<<" ";
// }cout<<endl;
// vec.erase(vec.begin()+2);
// for(int i=0;i<vec.size();i++)
// {
//     cout<<vec[i]<<" ";
// }cout<<endl;
// vec.insert(vec.begin()+2,70);
// for(int i=0;i<vec.size();i++)
// {
//     cout<<vec[i]<<" ";
// }cout<<endl;
sort(vec.begin(),vec.end());
for(int i=0;i<vec.size();i++)
{
    cout<<vec[i]<<" ";
}cout<<endl;
// sort(vec.rbegin(),vec.rend());
// for(int i=0;i<vec.size();i++)
// {
//     cout<<vec[i]<<" ";
// }cout<<endl;
 cout<<binary_search(vec.begin(),vec.end(),30);
cout<<endl;
cout<<find(vec.begin(),vec.end(),33)-vec.begin();

return 0;
}