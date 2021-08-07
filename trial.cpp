/*
    Aditya Jha
    CodeForces  --> adijha29
    CodeChef    --> adijha2905
    HackerRank  --> adijha2905

    LinkedIn    --> https://www.linkedin.com/in/aditya-jha-727029204/
*/


#include <bits/stdc++.h>

using namespace std;
using namespace chrono;


/*-----------------------------------------------------------------------------------*/
typedef unsigned long long ull;
typedef long long ll;
typedef double d;
typedef long double ld;
typedef double d;
typedef float f;
/*-----------------------------------------------------------------------------------*/


#ifndef adijha29
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif


/*-----------------------------------------------------------------------------------*/
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
/*-----------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------------------------------------------------------*/
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.f); cerr << ","; _print(p.s); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "= [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "= [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "= [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "= [ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*--------------------------------------------------------------------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------------*/
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define clear cout.flush();
#define MOD 1000000007
#define N 200001
#define INF 1e18
#define nline "\n"
#define pb push_back
#define pop po_back
#define all(x) x.begin(),x.end()
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repb(i,a,b) for(ll i=a;i>=b;i--)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define fillby(a,b) memset(b,a,sizeof(b))
/*-----------------------------------------------------------------------------------


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void google(int t) {cout << "Case #" << t << ": ";}
void toOppositeCase(string str){ll ln = str.length();for (ll i = 0; i < ln; i++) {if (str[i] >= 'a' && str[i] <= 'z'){str[i] = str[i] - 32;}else if (str[i] >= 'A' && str[i] <= 'Z'){str[i] = str[i] + 32;}}}
int gcd(ll a, ll b){if(b==0) {return a;} return gcd(b,a%b);}
int countDigits(ll n){return floor(log10(n)+1);}
int factorial(ll n){ll result=1;for(ll i=1;i<=n;i++){result=result*i;}return result;}
int countTrailingZeroes(ll n){ll result=0;for(ll i=5;i<=n;i*=5){result=result+(n/i);}return result;}
ll power(int x,int n){int res=1;while(n>0){if(n&1){res = res * x;}x = x*x;n = n>>1;}return res;}
ll reversenumber(ll x){ll reverse = 0;while(x>0){ll rem = x%10;reverse = reverse*10 + rem;x = x/10;}return reverse;}
double areaOfCircle(double r){return PI*r*r;}
string toLowerCase(string x){for(ll i=0;i<x.length();i++){if (x[i] >= 'A' && x[i] <= 'Z'){x[i] = x[i] + 32;}}return x;}
string toUpperCase(string x){for(ll i=0;i<x.length();i++){if (x[i] >= 'a' && x[i] <= 'z'){x[i] = x[i] - 32;}}return x;}
bool isPalindrome(ll n){ll reverse = 0;ll temp = n;while(temp!=0){ll rem = temp%10;reverse=reverse*10 + rem;temp = temp/10;}return (reverse==n);}
bool isPrime(ll n){if(n==1){return false;}if(n==2||n==3){return true;}if(n%2==0||n%3==0){return false;}for(ll i=5;i*i<=n;i+=6){if(n%i==0 || n%(i+2)==0){return false;}}return true;}
ll up(ll n,ll k){if(n%k==0){return (n/k);}return ((n/k)+1);}
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------CODE Starts Here---------------------------------------*/

void solve(){
    
}

/*---------------------------------------CODE Ends---------------------------------------*/


int32_t main(){
#ifndef adijha29
    freopen("Error.txt", "w", stderr);
#endif
    
    fastio
    auto start1 = high_resolution_clock::now();
    solve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);

#ifndef adijha29
    cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}