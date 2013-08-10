#include<iostream>
#include<map>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    map< string, int >foros;
    int T, N, x[5], i;
    char num[5];
    string tri;
    map< string, int >::iterator it;

    while( cin >> N && N )
    {
        foros.clear();
        for( int j =0; j<N; j++)
        {
            for( i = 0; i < 5; i++  )
                cin >> x[i];

            sort(x, x+5);
            tri.clear();

            for( i=0; i<5; i++ )
            {
                itoa( x[i], num, 10 );
                tri += num;
            }

            foros[tri]++;
        }

        int tot=0, sum=0;
        for(it=foros.begin(); it!=foros.end(); it++)
            if(tot<(*it).second) tot=(*it).second;

        for(it=foros.begin(); it!=foros.end(); it++)
            if( (*it).second == tot ) sum += tot;

        cout << sum << endl;

    }


         return 0;
}
