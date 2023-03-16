// this problem will use the predicate function, lumberjack mirko wood cutting problem
//  Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.
// Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact, matlab jo trees ki height H se kaam rahegi woh nhi katenge because main ek baar mai blade ghuma raha hoo ). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).
// Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.
// Input
// The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).
// The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres). The sum of all heights will exceed M, thus Mirko will always be able to obtain the required amount of wood.
// Output
// The first and only line of output must contain the required height setting.
// Example
// Input:
// 4 7
// 20 15 10 17
// Output:
// 15

// this question is the combination of the predicate function and binary search
// predicate functions are of only two types i.e
// FFFTTTT and TTTTFFFF, so if I found the first false and first true then based on that I can easily find the answer becase from there we will know from where to start and it is looking like the lowerbound and the upperbound
// for FFFFTTTTT kind case
// sabse pehle maine middle nikala aur mujhe false mila toh mujhe pata hai flase k left mai to sab false hi honge toh main s=mid+1 kar dunga because  mera middle false aya tha agar mera middle true aya toh mera answer mid hoga ya fir uske left side mai
// for TTTTFFFFF
// yaha kya hoga pehle main middle find karunga aur agar mujhe false mila toh main toh mujhe pata hai false k right side main sab false hi hoga toh main end ko middle -1 kar dunga
// yaha kya ho raha hai agar main height jyada bada dunga toh mujhe kaam wood milega toh, agar main height jyad choti rakh dunga toh zaroorat se jyadaa ped kat jayenge so I have to select the blade of height wisely
#include <iostream>
using namespace std;
// here I am declaring the size of the array
const int N = 1e6 + 10;
// here I am taking the number of trees
int n;
// the amount of wood which I want
long long m;
long long trees[N];
// predicate function
bool isWoodSufficient(int h)
{
    // yaha par main yeh store kar raha hoo ki kitni wood milegi mujhe
    // yaha kya hoga mere pass ek height ki blade hogi aur mai cut karunga aur check karunga ki jo wood mujhe mila hai kya woh greater then or equal to m hai ya nhi
    long long wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (trees[i] >= h)
        {
            wood += (trees[i] - h);
        }
    }
    return wood >= m;
    // or
    // if(wood>=m){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }
    // my search space
    long long lo = 0;
    // this 10^9 is the maximum height given
    long long hi = 1e9;
    long long mid = (lo + hi) / 2;
    // predicate function like T T T T F F F F
    while (hi - lo > 1)
    {
        // I am sending mid as height and checking is this heihgt is efficient
        if (isWoodSufficient(mid))
        {
            // here I can get the answer at mid also so I have to include it in the search space
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
        mid = (lo + hi) / 2;
    }
    // pehle main high k liye check karunga becuase hume maximum height chahiye
    if (isWoodSufficient(hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << lo << endl;
    }
    return 0;
}