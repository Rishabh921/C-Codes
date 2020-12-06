//setting bit means putting 1 at pos 1

void setBitAtPos(int n, int pos)
{
	n = (n | (1 << pos));
	cout << n << endl;
}
