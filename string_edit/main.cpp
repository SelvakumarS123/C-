
//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n;
//    cin >> n;
//
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=i;j++)
//        {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//
//}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n,m;
//    cin >> n;
//    m=n;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=m;j++)
//        {
//            cout<<"*	";
//        }
//        m--;
//        cout<<endl;
//    }
//
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n,m;
//    cin >> n;
//    m=n;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=n;j++)
//        {
//            if(j>=m)
//            {
//                cout<<"* ";
//            }
//            else
//            {
//                cout<<"  ";
//            }
//        }
//        m--;
//        cout<<endl;
//    }
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n,m;
//    cin >> n;
//    m=n;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=n;j++)
//        {
//            if(j>=i)
//            {
//                cout<<"*	";
//            }
//            else
//            {
//                cout<<"	";
//            }
//        }
//        cout<<endl;
//    }
//}


//		*
//	*	*	*
//*	*	*	*	*
//	*	*	*
//		*

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n,sp,st;
//    cin >> n;
//    sp=n/2; //2
//    st=1;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=sp;j++)
//        {
//            cout<<"\t";
//        }
//        for(int j=1;j<=st;j++)
//        {
//            cout<<"*\t";
//        }
//        if(i<=n/2)
//        {
//            sp--;
//            st+=2;
//        }
//        else
//        {
//            sp++;
//            st-=2;
//        }
//        cout<<endl;
//    }
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n,p,q,k,l;
//    cin >> n;
//    p=n/2;
//    k=((n+p)/2);
//    //cout<<k<<endl;
//    l=((n+p)/2)+2;
//    //cout<<l<<endl;
//    for(int i=1;i<=n;i++)
//    {
//        if(i<(n/2)+1)
//        {
//        for(int j=1;j<=n+p;j++)
//        {
//            if(k<j&&j<l)
//            {
//                //cout<<"k= "<<k<<" l= "<<l<<" ";
//                cout<<"\t";
//            }
//
//            else
//            {
//                cout<<"*\t";
//            }
//        }
//        k--;
//        l++;
//        cout<<endl;
//        }
//        if(i>(n/2))
//        {
//        for(int j=1;j<=n+p;j++)
//        {
//            if(k<j&&j<l)
//            {
//                //cout<<"k= "<<k<<" l= "<<l<<" ";
//                cout<<"\t";
//            }
//            else
//            {
//                cout<<"*\t";
//            }
//        }
//        k++;
//        l--;
//        cout<<endl;
//        }
//
//    }
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n,sp,st;
//    cin>>n;
//    sp=1;
//    st=(n/2)+1;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=st;j++)
//        {
//            cout<<"* ";
//        }
//        for(int j=1;j<=sp;j++)
//        {
//            cout<<"  ";
//        }
//        for(int j=1;j<=st;j++)
//        {
//            cout<<"* ";
//        }
//        cout<<endl;
//
//        if(i<(n/2)+1)
//        {
//            sp+=2;
//            st--;
//        }
//        else
//        {
//            sp-=2;
//            st++;
//        }
//    }
//
//}


//
//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n;
//    cin >> n;
//
//    int stars = n / 2 + 1;
//    int spaces = 1;
//    for (int i = 1; i <= n; i++){
//        for (int j = 1; j <= stars; j++){
//            cout << ("*	");
//        }
//        for (int j = 1; j <= spaces; j++){
//            cout << ("	");
//        }
//        for (int j = 1; j <= stars; j++){
//            cout << ("*	");
//        }
//
//        cout << endl;
//
//        if (i < n / 2 + 1){
//            stars--;
//            spaces += 2;
//        }else{
//            stars++;
//            spaces -= 2;
//        }
//    }
//}

//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n,sp,st;
//    cin >> n;
//    sp=0;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=sp;j++)
//        {
//            cout<<"\t";
//        }
//        cout<<"*\t";
//        cout<<endl;
//        sp++;
//    }
//}

//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n,sp1,sp2,st;
//    cin >> n;
//    sp1=n-1;
//    sp2=0;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=sp1;j++)
//        {
//            cout<<"\t";
//        }
//        cout<<"*\t";
//        for(int j=1;j<=sp2;j++)
//        {
//            cout<<"\t";
//        }
//        cout<<endl;
//        sp1--;
//        sp2++;
//    }
//}

//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n,sp1,sp2,st;
//    cin >> n;
//    sp1=n-1;
//    sp2=0;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=sp1;j++)
//        {
//            cout<<"\t";
//        }
//        cout<<"*\t";
//        cout<<endl;
//        sp1--;
//    }
//}
//
//

//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n,m;
//    cin >> n;
//    m=n;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=n;j++)
//        {
//            if(i==j||j==m)
//            {
//                cout<<"*\t";
//            }
//            else{cout<<" \t";}
//        }
//        m--;
//        cout<<endl;
//    }
//}


//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n,sp1,sp2,st1=1,st2=1;
//    cin >> n;
//    sp1=n/2;
//    sp2=0;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=sp1;j++)
//        {
//            cout<<"\t";
//        }
//
//        if (i==1&&i==n)
//        {
//            cout<<"*\t";
//        }
//        else
//        {
//            cout<<"*";
//        }
//
//        for(int j=1;j<=sp2;j++)
//        {
//            cout<<"\t";
//        }
//        if (i!=1&&i!=n)
//        {
//            cout<<"*\t";
//        }
//        cout<<endl;
//        if(i<=(n/2))
//        {
//            sp2+=2;
//            sp1--;
//        }
//        else
//        {
//            sp1++;
//            sp2-=2;
//        }
//    }
//
//}

//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n,m;
//    cin >> n;
//    m=1;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=i;j++)
//        {
//            cout<<m<<"\t";
//            m++;
//        }
//        cout<<endl;
//    }
//}


//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n,n1=1,n2=1,n3,k;
//    cin >> n;
//    k=0;
//    for(int i=1;i<=2;i++)
//    {
//        if(i==1)
//        {
//            cout<<k<<"\t";
//            k++;
//        }
//        else if(i==2)
//        {
//            cout<<k<<"\t";
//            cout<<k<<"\t";
//        }
//        cout<<endl;
//    }
//    for(int i=3;i<=n;i++)
//    {
//        for(int j=1;j<=i;j++)
//        {
//            n3=n1+n2;
//            cout<<n3<<"\t";
//            n1=n2;
//            n2=n3;
//        }
//        cout<<endl;
//    }
//}





//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n,n1=0,n2=1;
//    cin >> n;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=i;j++)
//        {
//            cout<<n1<<"\t";
//            int n3=n1+n2;
//            n1=n2;
//            n2=n3;
//        }
//        cout<<endl;
//    }
//}


#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,n1=1,n2=1;
    cin >> n;
    cout<<n1<<"\t";
    cout<<endl;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j>=2&&j<=i-1)
            {
                int n3=n2+n1;
                cout<<n3<<"\t";
                n1=n3;
                n1=n2;
            }
            else
            {
                cout<<n1<<"\t";
            }

        }
        cout<<endl;
    }
}

