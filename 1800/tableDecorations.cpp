#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int r, g, b, x, y, z;
    int ans = 0;
    cin >> r >> g >> b;

	x = min(r, min(g, b));
	z = max(r, max(g, b));
	y = r + g + b - x - z;
	if (z / 2 <= (x + y)) {
		ans += (z + x + y) / 3;
	}
	else {
		ans = x + y;
	}
	cout << ans;

    /* TOO SLOW APPROACH, t > 1s
    while ((r==1 && g==1 && b==1) || (r>1 && (g>0 || b>0)) || (g>1 && (b>0 || r>0)) || (b>1 && (r>0 || g>0)))
    {
        // cout << "\nSTAV:\n" << r << " " << g << " " << b << "\n";

        if (r==g && g==b)
        {
            out+=r;
            break;
        }
        else if (r>g && g>=b && g>0) // r = max, g >= b
        {
            r-=2; g--;
            out++;
        }
        else if (r>g && b>=g && b>0)
        {
            r-=2; b--;
            out++;
        }
        else if (g>b && b>=r && b>0) // g = max, b >= r
        {
            g-=2;b--;
            out++;
        }
        else if (g>b && r>=b && r>0)
        {
            g-=2;r--;
            out++;
        }
        else if (b>r && r>=g && r>0) // b = max, r >= g
        {
            b-=2;r--;
            out++;
        }
        else if (b>r && g>=r && g>0)
        {
            b-=2;g--;
            out++;
        }
        else
            break; // < 3 balony
            // cout << "\nNEOSETRENY STAV\n" << r << " " << g << " " << b << "\n";
    } */
}