#include "lexer.h"
#include "symbole.h"
#include <stack>
#include <string>

class State;

using namespace std;

class Automate {

public:
  Automate(string flux);
  void decalage(Symbole *s, State *e);
  void reduction(int n, Symbole *s);
  void analyse();

protected:
  stack<Symbole *> symbolstack;
  stack<State *> statestack;
  Lexer *lexer;
};
