#include <iostream>
using namespace std;

void uno();
void dos();
void tres();
void cuatro();
void cinco();
void seis();
void siete();
void ocho();
void nueve();
void diez();

int n;

int main () {
    cin>>n;
    switch (n) {
        case 1: uno(); break;
        case 2: dos(); break;
        case 3: tres(); break;
        case 4: cuatro(); break;
        case 5: cinco(); break;
        case 6: seis(); break;
        case 7: siete(); break;
        case 8: ocho(); break;
        case 9: nueve(); break;
        case 10: diez(); break;

    }


    return 0;
}

void uno() {
    string a;
    getline(cin,a);
    for (int i=0;i<n;i++) {
        cout<<a;
    }
}
void dos() {
    string a,b;
    cin>>a>>b;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}
void tres() {
    string a,b,c;
    cin>>a>>b>>c;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                cout<<c<<endl;
            }
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}
void cuatro() {
    string a,b,c,d;
    cin>>a>>b>>c>>d;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                for (int q=0;q<n;q++) {
                    cout<<d<<endl;
                }
                cout<<c<<endl;
            }
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}
void cinco() {
    string a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                for (int q=0;q<n;q++) {
                    for (int w=0;w<n;w++) {
                        cout<<e<<endl;
                    }
                    cout<<d<<endl;
                }
                cout<<c<<endl;
            }
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}

void seis() {
    string a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                for (int q=0;q<n;q++) {
                    for (int w=0;w<n;w++) {
                        for (int r=0;r<n;r++) {
                            cout<<f<<endl;
                        }
                        cout<<e<<endl;
                    }
                    cout<<d<<endl;
                }
                cout<<c<<endl;
            }
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}

void siete() {
    string a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f>>g;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                for (int q=0;q<n;q++) {
                    for (int w=0;w<n;w++) {
                        for (int r=0;r<n;r++) {
                            for (int t=0;t<n;t++) {
                                cout<<g<<endl;
                            }
                            cout<<f<<endl;
                        }
                        cout<<e<<endl;
                    }
                    cout<<d<<endl;
                }
                cout<<c<<endl;
            }
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}
void ocho() {
    string a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                for (int q=0;q<n;q++) {
                    for (int w=0;w<n;w++) {
                        for (int r=0;r<n;r++) {
                            for (int t=0;t<n;t++) {
                                for (int y=0;y<n;y++) {
                                    cout<<h<<endl;
                                }
                                cout<<g<<endl;
                            }
                            cout<<f<<endl;
                        }
                        cout<<e<<endl;
                    }
                    cout<<d<<endl;
                }
                cout<<c<<endl;
            }
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}
void nueve() {
    string a,b,c,d,e,f,g,h,o;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>o;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                for (int q=0;q<n;q++) {
                    for (int w=0;w<n;w++) {
                        for (int r=0;r<n;r++) {
                            for (int t=0;t<n;t++) {
                                for (int y=0;y<n;y++) {
                                    for (int u=0;u<n;u++) {
                                        cout<<o<<endl;
                                    }
                                    cout<<h<<endl;
                                }
                                cout<<g<<endl;
                            }
                            cout<<f<<endl;
                        }
                        cout<<e<<endl;
                    }
                    cout<<d<<endl;
                }
                cout<<c<<endl;
            }
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}
void diez() {
    string a,b,c,d,e,f,g,h,o,p;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>o;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                for (int q=0;q<n;q++) {
                    for (int w=0;w<n;w++) {
                        for (int r=0;r<n;r++) {
                            for (int t=0;t<n;t++) {
                                for (int y=0;y<n;y++) {
                                    for (int u=0;u<n;u++) {
                                        for (int v=0;v<n;v++) {
                                            cout<<p<<endl;
                                        }
                                        cout<<o<<endl;
                                    }
                                    cout<<h<<endl;
                                }
                                cout<<g<<endl;
                            }
                            cout<<f<<endl;
                        }
                        cout<<e<<endl;
                    }
                    cout<<d<<endl;
                }
                cout<<c<<endl;
            }
            cout << b<<endl;
        }
        cout<<a<<endl;
    }
}





