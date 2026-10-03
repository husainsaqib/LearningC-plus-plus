#include <iostream>
using namespace std;

struct Movie {
    string title;
    string director;
    float rating;
};

void input(Movie &m) {
    cout << "Enter title: ";
    cin >> m.title;

    cout << "Enter director: ";
    cin >> m.director;

    cout << "Enter rating: ";
    cin >> m.rating;
}

void display(Movie m) {
    cout << "\nHighest Rated Movie" << endl;
    cout << "Title: " << m.title << endl;
    cout << "Director: " << m.director << endl;
    cout << "Rating: " << m.rating << endl;
}

int main() {
    int n;

    cout << "Enter number of movies: ";
    cin >> n;

    Movie movies[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of movie " << i + 1 << endl;
        input(movies[i]);
    }

    int highest = 0;

    for (int i = 1; i < n; i++) {
        if (movies[i].rating > movies[highest].rating) {
            highest = i;
        }
    }

    display(movies[highest]);

    return 0;
}