#include <bits/stdc++.h>
using namespace std;

int n;
vector<int>vi={1,2,3,4,5,6};
int main()
{
	// PAIR
	pair<int,int> p2,p1;
	p2={1,2};
	p1={2,3};
	cout<<(p1>p2);// print=1 since (2>1)

	// pair<int,string> p;
	// p={2,"abc"};
	// cout<<p.first<<" "<< p.second<<endl;
	// int a[]={1,2,3};
	// int b[]={2,3,4};
	// pair <int, int> a_arr[3];
	// a_arr[0]={1,2};
	// a_arr[1]={2,3};
	// a_arr[2]={3,4};
	// //swappinng values in pair
	// swap(a_arr[0],a_arr[2]);
	//////////////////////////////////////////////////////////

	//VECTOR -->> continuous store

	// vector<int> v; //declaration of vetor
	// int n=3;
	// for(int i=0;i<3;i++){
	// 	int x;
	// 	cin>>x;
	// 	v.push_back(x);
	// } 
	// v.pop_back();// remove last element from vector
	// vector<int > v2=v;//copy of vector
	// vector<pair<int,int>> vp ={{1,2}, {2,3}, {3,4}};//vector of pair
	// for(int i=0;i<3;i++){
	// 	int q,w;
	// 	cin>>q>>w;
	// 	vp.push_back({q,w}); //v3[0].first

	// vector<int> t={1,2,3,4};
	// // ITERATORS
	// //SHORT way of using iterator vector
	// for(int value :t)
	// {
	// 	cout<<"using values"<<value<< " ";
	// }

	// // vector<int> :: iterator it = v.begin();
	// // cout<<(*it)<<endl; // v[0]

	// vector<pair<int,int>> ::iterator it ;//iterator in vector in pair
	// //we can also use {auto} instead if {vector<pair<int,int>> ::iterator it}
	// for(it=vp.begin();it!=vp.end();it++) //{auto it} 
	// {
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;
	// }
	// //another way of using iterator of vector in pair
	// for(it=vp.begin();it!=vp.end();it++){
	// 	cout<<(it->first)<<" "<<(it->second)<<endl;
	// }

	// }

	// //using of iterator in anothe way // SHORT WAY
	// for(pair<int,int> value,vp)//we also use {auto} instead of  {pair<int,int>}
	// {
	// 	cout<<value.first
	// }
 
	//MAPS  -->> unordered  or not continuous 
	// unique keys 
	//unordered map has less time complexity
	map<int,string> m;//(they uses trees)
	m[1]= "abc";
	m[3]="da";
	m.insert({4,"afg"}); //another way
	map<int,string> :: iterator itm;
	for(itm=m.begin(); itm!=m.end(); itm++)
	{
		cout<<(itm->first) <<" "<<(itm->second)<<endl;
	}
	//another way
	for(auto &pr : m) //pr acts as a pair 
	{
		cout<<(pr.first) <<" "<<(pr.second)<<endl;
	}
	auto it=m.find(3);
	cout<<it->second;
	m.erase(1);//for erasing or use m.erase(it);

	map<string,int> m1;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		m1[s]++;
	}//for storing unique string or intergers with frequency
	for(auto pr1 : m1)
		cout<<pr1.first << pr1.second;

	
	//SET 

	set<string> s;
	for(int i=0;i<5;i++)
	{
		string st;
		cin>>st; // for only unique string or int without frequency 
		s.insert(st);
	}
	for(auto value : s)
	{
		cout<<value;
	}
	multiset<string> s1; // it also stores the dublicate value and  sorted 
	s1.insert("abc");
	s1.insert("abc");
	s1.insert("sds");
	s1.insert("adfd");
	auto it3 = s1.find("abc");
	if(it3 != s1.end()){
		s1.erase(it3); //it only erases one value of that iterator 
	}

	// STACKS --> LIFO

	stack<int> sst;
	sst.push(2);
	sst.push(3);
	sst.push(4);
	sst.push(5);

	while(!sst.empty()){
		cout<<sst.top()<<" ";// 5 4 3 2 
		sst.pop();
	}

	//QUEUE --> FIFO

	queue<string> q;
	q.push("abc");
	q.push("def");
	q.push("dsd");

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}

	//SORT -->includes quick,insertion, heap sort 
	int a[8]={4,5,5,7,8,25};
	sort(a,a+n);//starting of address nd ending 
	sort(a,a+3);//here it only sort till 6 (a+3-1)
	// Sort the vector in descending order
    sort(vi.begin(), vi.end(), greater<int>());
  

	//LOWER & UPPER BOUND -->to use array need to be sorted

	int *pt= lower_bound(a,a+n,6); //returns the no or if it is not pesent then the no. greter then it
	//unless the uppper no is not found its returns the garbage value
	cout<<(*pt)<<" " ;//O/T 7 but if 5 in place of 6 then output =5
	int *ptr= lower_bound(a,a+n,6);//7
	//it always returns the upper no value

	//in case of vectors a.begin(),a.end() and auto in place of *pt
	//in case of (set,map) we use { s.lower_bound() } due to log(n) 
	set<int>mu;
	mu.insert(5);
	mu.insert(6);
	auto itu=mu.lower_bound(5); //syntz of using in set or  with map

	//MIN & MAX
	int min= *min_element(vi.begin(),vi.end());
	cout<<min;
	//SUM
	int summ= accumulate(vi.begin(),vi.end(),0);//here 0 is the initial sum=0
	//COUNT
	int ct=count(vi.begin(),vi.end(),3);
	//FIND
	auto itf=find(vi.begin(),vi.end(),3); 
	cout<<*itf;

	//REVERSE -->we can also reverse string too
	reverse(vi.begin(),vi.end());//we can also use .begin()+2 to just reverse particular part
	//in case of array begin() & end() get replaced by (a,a+n)

	//LAMBDA FUNCN

	auto sum=[](int xt){return xt+2;}(2);//returns 4
	cout<<all_of(vi.begin(),vi.end(),[](int xtt){return xtt>0;}); //checks all the elements 
	cout<<any_of(vi.begin(),vi.end(),[](int xtt){return xtt>0;});//checks any the given is true returns true
	cout<<none_of(vi.begin(),vi.end(),[](int xtt){return xtt>0;});//all should be true
	//BinAry SEARCH

	binary_search(vi.begin(),vi.end(), 4);

	//to print the end elemnt
	auto ti=vi.end();
    --ti;
    cout<<*ti<<" ";
	//alternative of above 3lines
	int x = *prev(vi.end());


	//swapping using XOR
	int ax=5,bx=6;
	ax=ax^bx;
	bx=bx^ax;
	ax=ax^bx;
	cout<<ax<<" "<<bx;


	   

	


	
}