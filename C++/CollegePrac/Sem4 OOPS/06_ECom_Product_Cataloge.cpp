#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Template Product class
template <typename T>
class Product {
private:
    string name, id;
    double price;
    T categoryData;
    static int totalProducts;

public:
    Product(string n, string productId, double p, T data) 
        : name(n), id(productId), price(p), categoryData(data) {
        totalProducts++;
    }
    
    ~Product() { totalProducts--; }
    
    // Operator overloading for comparison
    bool operator==(const Product<T>& other) const {
        return id == other.id;
    }
    
    bool operator<(const Product<T>& other) const {
        return price < other.price;
    }
    
    // Getters
    string getName() const { return name; }
    string getId() const { return id; }
    double getPrice() const { return price; }
    T getCategoryData() const { return categoryData; }
    
    // Static member function
    static int getTotalProducts() { return totalProducts; }
    
    // Display product information
    void displayProduct() const {
        cout << "ID: " << id << ", Name: " << name 
             << ", Price: Rs. " << price 
             << ", Category Data: " << categoryData << endl;
    }
};

// Initialize static member
template <typename T>
int Product<T>::totalProducts = 0;

// Template Product Catalog class
template <typename T>
class ProductCatalog {
private:
    vector<Product<T>> products;
    string categoryName;

public:
    ProductCatalog(string catName) : categoryName(catName) {}
    
    void addProduct(const Product<T>& product) {
        products.push_back(product);
        cout << "Product " << product.getName() << " added to " << categoryName << " catalog!" << endl;
    }
    
    void removeProduct(const string& productId) {
        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->getId() == productId) {
                cout << "Product " << it->getName() << " removed from catalog!" << endl;
                products.erase(it);
                return;
            }
        }
        cout << "Product with ID " << productId << " not found!" << endl;
    }
    
    Product<T>* findProduct(const string& productId) {
        for (auto& product : products) {
            if (product.getId() == productId) return &product;
        }
        return nullptr;
    }
    
    void displayCatalog() const {
        cout << "\n=== " << categoryName << " CATALOG ===\n";
        cout << "Total Products: " << products.size() << endl;
        for (const auto& product : products) {
            product.displayProduct();
        }
        cout << endl;
    }
    
    void sortByPrice() {
        sort(products.begin(), products.end());
        cout << categoryName << " catalog sorted by price!" << endl;
    }
    
    void searchByPrice(double minPrice, double maxPrice) const {
        cout << "\n=== PRODUCTS IN PRICE RANGE Rs." << minPrice << " - Rs." << maxPrice << " ===\n";
        bool found = false;
        for (const auto& product : products) {
            if (product.getPrice() >= minPrice && product.getPrice() <= maxPrice) {
                product.displayProduct();
                found = true;
            }
        }
        if (!found) cout << "No products found in this price range!" << endl;
    }
    
    int getProductCount() const { return products.size(); }
};

// Specialized template for Electronics with warranty info
class Electronics {
public:
    string brand;
    int warrantyMonths;
    
    Electronics(string b = "", int w = 0) : brand(b), warrantyMonths(w) {}
    
    friend ostream& operator<<(ostream& os, const Electronics& e) {
        os << e.brand << " (" << e.warrantyMonths << " months warranty)";
        return os;
    }
};

// Specialized template for Clothing with size info
class Clothing {
public:
    string size;
    string material;
    
    Clothing(string s = "", string m = "") : size(s), material(m) {}
    
    friend ostream& operator<<(ostream& os, const Clothing& c) {
        os << "Size: " << c.size << ", Material: " << c.material;
        return os;
    }
};

// Specialized template for Books with author info
class Books {
public:
    string author;
    int pages;
    
    Books(string a = "", int p = 0) : author(a), pages(p) {}
    
    friend ostream& operator<<(ostream& os, const Books& b) {
        os << "Author: " << b.author << ", Pages: " << b.pages;
        return os;
    }
};

int main() {
    // Create different product catalogs using templates
    ProductCatalog<Electronics> electronicsCatalog("Electronics");
    ProductCatalog<Clothing> clothingCatalog("Clothing");
    ProductCatalog<Books> booksCatalog("Books");
    
    // Add Electronics products
    electronicsCatalog.addProduct(Product<Electronics>("iPhone 14", "E001", 79999, Electronics("Apple", 12)));
    electronicsCatalog.addProduct(Product<Electronics>("Samsung TV", "E002", 45000, Electronics("Samsung", 24)));
    electronicsCatalog.addProduct(Product<Electronics>("MacBook Air", "E003", 99999, Electronics("Apple", 12)));
    
    // Add Clothing products
    clothingCatalog.addProduct(Product<Clothing>("Cotton T-Shirt", "C001", 599, Clothing("L", "Cotton")));
    clothingCatalog.addProduct(Product<Clothing>("Denim Jeans", "C002", 1299, Clothing("32", "Denim")));
    clothingCatalog.addProduct(Product<Clothing>("Silk Saree", "C003", 2999, Clothing("Free", "Silk")));
    
    // Add Books products
    booksCatalog.addProduct(Product<Books>("C++ Programming", "B001", 450, Books("Bjarne Stroustrup", 672)));
    booksCatalog.addProduct(Product<Books>("Data Structures", "B002", 550, Books("Mark Weiss", 832)));
    booksCatalog.addProduct(Product<Books>("Algorithms", "B003", 699, Books("Robert Sedgewick", 955)));
    
    // Display all catalogs
    electronicsCatalog.displayCatalog();
    clothingCatalog.displayCatalog();
    booksCatalog.displayCatalog();
    
    // Demonstrate operator overloading
    cout << "=== PRODUCT COMPARISON ===\n";
    Product<Electronics>* phone1 = electronicsCatalog.findProduct("E001");
    Product<Electronics>* phone2 = electronicsCatalog.findProduct("E001");
    if (phone1 && phone2) {
        cout << "iPhone comparison: " << (*phone1 == *phone2 ? "Same product" : "Different products") << endl;
    }
    
    // Search by price range
    electronicsCatalog.searchByPrice(40000, 80000);
    
    // Sort by price
    electronicsCatalog.sortByPrice();
    electronicsCatalog.displayCatalog();
    
    // Display total products across all categories
    cout << "=== SUMMARY ===\n";
    cout << "Electronics: " << electronicsCatalog.getProductCount() << " products\n";
    cout << "Clothing: " << clothingCatalog.getProductCount() << " products\n";
    cout << "Books: " << booksCatalog.getProductCount() << " products\n";
    cout << "Total Products (Electronics): " << Product<Electronics>::getTotalProducts() << endl;
    cout << "Total Products (Clothing): " << Product<Clothing>::getTotalProducts() << endl;
    cout << "Total Products (Books): " << Product<Books>::getTotalProducts() << endl;
    
    return 0;
}