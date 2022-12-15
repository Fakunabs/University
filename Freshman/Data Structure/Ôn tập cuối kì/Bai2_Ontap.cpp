#include <bits/stdc++.h>

using namespace std;
// khai bao cau truc cay nhi phan
struct Node
{
	int key;
	Node *Left;
	Node *Right;
};
typedef Node *NODEPTR ;

// ham tao 1 Node
Node *makeNode(Node *p, char x)
{
	p = (Node *)malloc(sizeof(Node)); // cap bo nho cho con tro
	// p = new Node*; //cap bo nho cho con tro voi C++
	p->key = x;
	p->Left = p->Right = NULL;
	return p;
}

// Nhap du lieu cho cay nhi phan
// Ham nhap du lieu key tu ban phim
Node *CreateNODEPTR (Node *p, char x)
{ // nhap cay
	cout << "Node:";
	cin >> x;
	if (x == 0)
		return NULL;
	p = makeNode(p, x);
	cout << "Nhap con trai cua node";
	p->Left = CreateNODEPTR (p->Left, x);
	cout << "Nhap con phai cua node: ";
	p->Right = CreateNODEPTR (p->Right, x);
	return p;
}

// Cac phep duyet cay

// Duyet theo thu tu truoc(Preoder): N-L-R
void NLR(NODEPTR  T)
{
	if (T != NULL)
	{
		cout << T << T->key;
		NLR(T->Left);
		NLR(T->Right);
	}
}

Node *searchKey(NODEPTR  T, char x)
{
	NODEPTR  p;
	if (T->key == x)
		return T;
	if (T == NULL)
		return NULL;
	p = searchKey(T->Left, x);
	if (p == NULL)
		searchKey(T->Right, x);
}

// Ham tra ve con trai
Node *leftChild(NODEPTR  T)
{
	if (T != NULL)
		return T->Left;
	else
		return NULL;
}
// Ham tra ve con phai
Node *rightChild(NODEPTR  T)
{
	if (T != NULL)
		return T->Right;
	else
		return NULL;
}

// Ham kiem tra Node la
int isLeaf(NODEPTR  T)
{
	if (T != NULL)
		return (T->Left == NULL && T->Right == NULL);
	else
		return NULL;
}

int main()
{
	NODEPTR  T;
	T = NULL; // tao cay rong
	Node *p = NULL;
	int x;
	printf("Nhap 0 de chuyen sang nhap code khac hoac thoat");
	T = CreateNODEPTR (p, x); // Nhap cay
	int cnt;
	printf("Nhan 1 de chon duyet cay theo thu tu truoc NLR\n");
	printf("Nhan 2 de chon duyet cay theo thu tu giua LNR\n");
	printf("Nhan 3 de chon duyet cay theo thu tu sau LRN\n");
	printf("Moi ban nhap: ");
	scanf("%d", &cnt);
	while (cnt > 3 && cnt < 1)
	{
		printf("Moi ban nhap lai: ");
		scanf("%d", &cnt);
	}
	switch (cnt)
	{
	case 1:
		NLR(T);
		break;
	case 2:
		LNR(T);
		break;
	case 3:
		LRN(T);
		break;
	}

	printf("\nTong so nut tren cay : %d", SumNODEPTR (T));

	Node *P;

	printf("Nhap vao key can tim: ");
	scanf("%d", &x);
	P = searchKey(T, x);
	if (P != NULL)
		printf("Tim thay key %d\n", P->key);
	else
		printf("Key %d khong co trong cay\n", x);

	if (delKey(T, x))
		printf("Xoa thanh cong\n");
	else
		printf("Khong tim thay key %d can xoan", x);
	printf("Duyet cay theo thu tu giua: \n");
	ALNR(T);
	printf("\n");
	return 0;
}