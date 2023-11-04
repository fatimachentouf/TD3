# include <iostream>
using namespace std;
class Complex
{
	private:
		int reelle;
		int imagenaire;
		public:
	Complex()
	{
		cout<<"veillez entrer le reelle:"<<endl;
		cin>>reelle;
		cout<<"veillez entrer le imagenaire :"<<endl;
		cin>>imagenaire;
	}	
	//adition
	void operator+(Complex ob1)
	{
	    cout<<"le addition et "<<reelle+ob1.reelle<<"+"<<imagenaire+ob1.imagenaire<<"i"<<endl;
	}
	
	void operator-(Complex ob1)
    {
        cout<<"le soustracion et  "<<reelle-ob1.reelle<<"-"<<imagenaire-ob1.imagenaire<<"i"<<endl;
    }
    
	void operator*(Complex ob1)
	{
	   cout<<"le multiple et "<<reelle*ob1.reelle<<"*"<<imagenaire*ob1.imagenaire<<"i"<<endl;
	}
		void operator/(Complex ob1)
	{
	   cout<<"le divise et "<<reelle/ob1.reelle<<"/"<<imagenaire/ob1.imagenaire<<"i"<<endl;
	}
};
int main()
{
    Complex ob1;
    Complex ob2;
    ob2+ob1;
    ob2-ob1;
    ob2*ob1;
    ob2/ob1;
  
}

