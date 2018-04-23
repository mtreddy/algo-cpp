#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;


int map_set(void)
{
    map< int, set<int> > ms;
    int len = 0;
    int sm = 65365, lg=0;
    set <int> small;
    set <int> large;
    cout << "  map_set()" << endl;
    ms[1].insert(6);
    ms[2].insert(7);
    ms[3].insert(8);
    ms[4].insert(9);
    ms[2].insert(6);
    map<int,set<int> >::iterator it;
    set<int>::iterator s_it;
    for(it=ms.begin();it!=ms.end();++it){
#if 1
        len = it->first;
        //cout << len << " ";
        for(s_it=ms[len].begin();s_it!=ms[len].end();++s_it){
            //cout<<   *s_it << " , " ;
            if(len > 10)
                break;
        }
        cout <<  " Size of the set: " << ms[len].size();
        if(ms[len].size() < sm) {
            sm = ms[len].size();
            small = ms[len];
        }
        if(ms[len].size() > lg) {
            lg = ms[len].size();
            large = ms[len];
        }
        cout << endl;
#endif
    }
    cout << "small gr comp with no of vertices " << small.size()<< endl;
    cout << "lagre gr comp with no of vertices " << large.size()<< endl;
    
    cout << "  map_set()" << endl;
    return 0;
}


int vec_set(void)
{
    vector < vector<int> > V(4) ;
    vector < set<int> >  vs(4);
    V[0].push_back(1);
    cout << "vector len" << V[0].size() << endl;
    vs[0].insert(1);
    vs[0].insert(2);
    vs[0].insert(1);
    set<int>::iterator it;
    it = vs[0].find(3);
    if(it != vs[0].end())
        cout << "Is in set" << endl;
    else
        cout << "Is not in set" << endl;
    vs[1].insert(3);
    vs[1].insert(4);
    vs[1].insert(5);

    vs[2].insert(6);
    vs[2].insert(7);
    vs[2].insert(8);
    return 0;
}
void vec_in_vec(void){
    vector< vector<int> > vc[3];

}
int main(){
    vec_set();
    map_set();

}
