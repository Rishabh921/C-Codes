bool getBitAtPos(int n, int pos)
{
	return ((n & (1 << pos)) != 0);
}
