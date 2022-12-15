#include <iostream.h>
#include <conio.h>
#define hw 40 // ½ màn hình có 40 kí tự
typedef int DataType;
struct Node
{
    DataType data;
    Node *l, *r;
};

typedef Node *Tree;

// Vẽ cây nhị phân theo cách duyệt NLR,
//  với x, y là tọa độ nút cần vẽ, d là ½ số cột(kí tự) theo chiều ngang của màn hình

void NLR(Tree T, int x, int y, int d)
{
    if (T != NULL)
    {
        gotoxy(x, y);
        cout <<“(“<< T->data <<“)”;
        if (T->l != NULL)
        {
            gotoxy(x + 1, y + 1);
            cout <<‘|’;
            for (int i = x - d / 2 + 2; i <= x + 2; i++)
            {
                gotoxy(i, y + 2);
                cout <<‘-‘;
            }
            NLR(T->l, x - d / 2, y + 3, d / 2);
        }
        if (T->r != NULL)
        {
            gotoxy(x + 1, y + 1);
            cout <<‘|’;
            for (int i = x + 2; i <= x + d / 2 + 2; i++)
            {
                gotoxy(i, y + 2);
                cout <<‘-‘;
            }
            NLR(T->r, x + d / 2, y + 3, d / 2);
        }
    }
}

// Chèn nút vào cây
void insertTree(Tree &root, DataType x)
{
    if (root == NULL)
    {
        root = new Node;
        root->data = x;
        root->l = NULL;
        root->r = NULL;
    }
    else
    {
        if (x == root->data)
        {
            return;
        }
        else if (x < root->data)
            insertTree(root->l, x);
        else
            insertTree(root->r, x);
    }
}

void main(void)
{
    clrscr();
    Tree root = NULL;
    DataType x;
    while (1)
    {
        gotoxy(1, 15);
        cout <<“Nhap du lieu cho cay(thoat nhan - 99) :”;
        cin >> x;
        if (x == -99)
            break;
        insertTree(root, x);
        clrscr();
        NLR(root, hw, 1, hw);
    }
    clrscr();
    NLR(root, hw, 1, hw);
    getch();
}