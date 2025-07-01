#include <bits/stdc++.h>
using namespace std;

class node
{
private:
    node *parent, *left, *right;
    int value;

public:
    node()
    {
        parent = left = right = nullptr;
        value = 0;
    }
    node(int value)
    {
        parent = left = right = nullptr;
        this->value = value;
    }
    int getValue()
    {
        return this->value;
    }
    node *getLeft()
    {
        return left;
    }
    node *getRight()
    {
        return right;
    }
    node *getParent()
    {
        return parent;
    }
    void setParent(node *targetNode)
    {
        parent = targetNode;
    }
    void setLeft(node *targetNode)
    {
        left = targetNode;
    }
    void setRight(node *targetNode)
    {
        right = targetNode;
    }
    bool hasLeft()
    {
        return left != nullptr;
    }
    bool hasRight()
    {
        return right != nullptr;
    }
};

class BinaryTree
{
private:
    node *root;
    int sz;

public:
    BinaryTree()
    {
        sz = 0;
        root = nullptr;
    }
    node *getRoot()
    {
        return root;
    }

    bool isEmpty()
    {
        return sz == 0;
    }
    int size()
    {
        return sz;
    }
    bool isRoot(node *targetNode)
    {
        return targetNode->getParent() == nullptr;
    }
    bool isInternal(node *targetNode)
    {
        return (targetNode->hasLeft() || targetNode->hasRight());
    }
    bool isExternal(node *targetNode)
    {
        return (!targetNode->hasLeft() && !targetNode->hasRight());
    }

    node *insert(node *parent, int value)
    {
        node *newNode = new node(value);
        newNode->setParent(parent);
        if (root == nullptr)
        {
            root = newNode;
        }
        else if (!parent->hasLeft())
        {
            parent->setLeft(newNode);
        }
        else if (!parent->hasRight())
        {
            parent->setRight(newNode);
        }
        else
        {
            return nullptr;
        }
        sz++;
        return newNode;
    }

    void remove(node *targetNode)
    {
        if (targetNode != nullptr)
        {
            remove(targetNode->getLeft());
            remove(targetNode->getRight());
            sz--;
            delete targetNode;
        }
    }

    void preOrder(node *targetNode)
    {
        if (targetNode != nullptr)
        {
            cout << targetNode->getValue() << " ";
            preOrder(targetNode->getLeft());
            preOrder(targetNode->getRight());
        }
    }
    void inOrder(node *currentNode)
    {
        if (currentNode == nullptr)
            return;

        inOrder(currentNode->getLeft());
        cout << currentNode->getValue() << " ";
        inOrder(currentNode->getRight());
    }
    // Duyet cay theo thu tu hau tu
    void postOrder(node *currentNode)
    {
        if (currentNode == nullptr)
        {
            return;
        }

        postOrder(currentNode->getLeft());
        postOrder(currentNode->getRight());
        cout << currentNode->getValue() << " ";
    }

    // Liet ke tat ca duong di tu goc den la
    void PathsList(node *node, vector<int> paths)
    {
        if (node == nullptr)
        {
            return;
        }
        // them cac node da duyet duoc vao trong vector
        paths.push_back(node->getValue());
        // neu da duyet dc 1 duong di tu goc den la =>dung lai va thuc hien task trong ngan xep
        if (!node->hasLeft() && !node->hasRight())
        {
            cout << "Path: ";
            for (int value : paths)
            {
                cout << value << " -> ";
            }
            cout << "NULL\n";
        }
        // neu chua duyet het duong
        else
        {
            PathsList(node->getLeft(), paths);
            PathsList(node->getRight(), paths);
        }
    }

    // tinh tong cac so tu goc den la
    void SumOfPath(node *node, vector<int> path, int &sum)
    {
        // cay rong chua co phan tu
        if (node == nullptr)
        {
            return;
        }
        path.push_back(node->getValue());
        if (!node->getLeft() && !node->getRight())
        {
            int sumEach = 0;
            for (int value : path)
            {
                sumEach = sumEach * 10 + value;
            }
            sum += sumEach;
        }
        else
        {
            SumOfPath(node->getLeft(), path, sum);
            SumOfPath(node->getRight(), path, sum);
        }
    }

    // cho a, xac dinh xem duong di tu goc den la nao co tong = a
    void FindPathEqualToA(node *node, vector<int> path, int sum, int a, int &cnt)
    {
        sum = 0;
        // neu cay rong thi return
        if (node == nullptr)
        {
            return;
        }
        path.push_back(node->getValue());
        if (!node->hasLeft() && !node->hasRight())
        {
            for (int value : path)
            {
                sum += value;
            }
            if (sum == a)
            {
                cout << "True, ton tai duong di ";
                for (int value : path)
                {
                    cout << value << " -> ";
                }
                cout << "NULL co tong duong di = " << sum << endl;
                cnt++;
            }
        }
        else
        {
            FindPathEqualToA(node->getLeft(), path, sum, a, cnt);
            FindPathEqualToA(node->getRight(), path, sum, a, cnt);
        }
    }
};

int main()
{
    BinaryTree tree;
    BinaryTree findTree;
    vector<int> path;
    int sum = 0;
    system("cls");

    // them node vao cay nhi phan thu 1
    node *root = tree.insert(tree.getRoot(), 0);
    node *node1 = tree.insert(root, 1);
    node *node2 = tree.insert(root, 2);
    node *node3 = tree.insert(node1, 3);
    node *node4 = tree.insert(node1, 4);
    node *node5 = tree.insert(node2, 5);
    node *node6 = tree.insert(node2, 6);
    node *node7 = tree.insert(node3, 7);
    node *node8 = tree.insert(node3, 8);
    node *node9 = tree.insert(node4, 9);

    // them node vao cay nhi phan thu 2
    node *find_root = findTree.insert(findTree.getRoot(), 5);
    node *find_node1 = findTree.insert(find_root, 4);
    node *find_node2 = findTree.insert(find_root, 8);
    node *find_node3 = findTree.insert(find_node1, 11);
    node *find_node4 = findTree.insert(find_node3, 2);
    node *find_node5 = findTree.insert(find_node2, 13);
    node *find_node6 = findTree.insert(find_node2, 4);
    node *find_node7 = findTree.insert(find_node5, 7);
    node *find_node8 = findTree.insert(find_node6, 1);

    // duyet cay tien tu
    cout << "\n=====================================\n";
    cout << "duyet tien tu: ";
    tree.preOrder(tree.getRoot());
    cout << "\n=====================================\n";
    // duyet trung tu
    cout << "duyet trung tu: ";
    tree.inOrder(tree.getRoot());
    cout << "\n=====================================\n";
    // duyet hau tu
    cout << "duyet hau tu: ";
    tree.postOrder(tree.getRoot());
    cout << "\n=====================================\n";
    // in ra tat ca duong di tu goc den la
    cout << "\n=====================================\n";
    cout << "TAT CA DUONG DI TU GOC DEN LA: \n";
    tree.PathsList(tree.getRoot(), path);
    cout << "\n=====================================\n";
    // in ra tong duong di tu goc den la
    cout << "TONG DUONG DI TU GOC DEN LA:  \n";
    tree.SumOfPath(tree.getRoot(), path, sum);
    cout << "Sum of path = " << sum << endl;
    cout << "\n=====================================\n";
    // Tim tong cac so tu goc den la co gia tri = a
    cout << "Nhap vao gia tri a: ";
    int a, cnt = 0;
    cin >> a;
    cout << "DUONG DI TU GOC -> LA CO TONG BANG " << a << " LA: \n";
    findTree.FindPathEqualToA(findTree.getRoot(), path, sum, a, cnt);
    if (cnt == 0)
    {
        cout << "False, khong ton tai duong di nao co tong = " << a << " !" << endl;
    }
    return 0;
}