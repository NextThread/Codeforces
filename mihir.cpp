// * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
// //}
#include <bits/stdc++.h>
using namespace std;
#define int long long
void f()
{
 int n = 8;
 string lalerbal ;
 // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
 lalerbal += "RRRRRRRR";
 // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
 vector<string> grid(n);
 // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
 for (int i = 0; i < n; i++)
 // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
  cin >> grid[i];
  // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;


 for (int i = 0; i < n; i++)
 // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
 {
  // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
  if (grid[i] == lalerbal)
  // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
  {
   // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
   cout << "R";
   // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
   cout << endl;
   // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
   return;
   // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
  }
  // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
 }
 // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
// * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
 cout << "B";
 // * usage:
// *      vector < list < Type >::const_iterator > idx;
// *      itersort ( a.begin( ), a.end( ), idx, less < Type > ( ) );
// */
// template <class INIter, class RAIter, class Compare>
// void itersort ( INIter first, INIter last, vector < RAIter > & idx, Compare comp )
// {
//    /* alternatively: stackoverflow.com/questions/4307271 */
//    idx.resize ( distance ( first, last ) );
//    for ( typename vector < RAIter >::iterator j = idx.begin( ); first != last; ++ j, ++ first )
//        * j = first;

//    sort ( idx.begin( ), idx.end( ), IterSortComp< RAIter, Compare > (comp ) );
// }

// /*
// *  string utils

// inline void erase ( string & str, const char & ch )
// {
//    binder2nd < equal_to < char > > isch ( equal_to< char >(), ch );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isch );
//    str.erase ( iter, str.end() );
// }

// inline void erase ( string & str, const string & chrs )
// {
//    isin < char, string > isin_chrs ( chrs );
//    string::iterator iter = remove_if ( str.begin(), str.end(), isin_chrs );
//    str.erase ( iter, str.end() );
// }

// template < typename value_type>
// inline string val2str ( const value_type & x )
// {
//    ostringstream sout ( ios_base::out );
//    sout << x;
//    return sout.str();
// }

// template < typename value_type>
// inline value_type str2val ( const string & str )
// {
//    istringstream iss ( str, ios_base::in );
//    value_type val;

//    iss >> val;
//    return val;
 cout << endl;
}


main()
{
 int t = 1;
 cin >> t;
 while (t--)
  f();
}