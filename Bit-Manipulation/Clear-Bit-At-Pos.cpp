//make bit at pos equal to zero.

void clearBit(int n, int pos)
{
	n = (n & (~(1 << pos)));
	cout << n << endl;
}
