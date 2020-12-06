//change bit at pos to val

void updateBit(int n, int pos, int val)
{
	int mask = ~(1 << pos);
	n = n & mask;
	n = n | (val << pos);
	cout << n << endl;
}
