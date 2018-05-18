#include <iostream>
#include <vector>
class minimum_cycles
{
private:
      const int n_; //constante n_ entera que almacene el número de vértices del grafo
      vector<int> sol_; //  vector sol_ de enteros que almacene el vector de incidencia computado hasta el momento
      int best_value_; // variable best_val_ entera que almacene el mejor valor computado hasta el momento
      vector<int> best_sol_; //  vector best_sol_ de enteros que almacene el mejor vector de incidencia computado hasta el momento
public:
      //inicializar n_ con un tamaño determinado
      //el vector sol_ con el tamaño n_ x n_ , y valor cero para cada elemento
      //la variable best_sol_ con el valor numeric_limits<int>::max()
      //vector best_sol_, de manera similar a sol_.
      minimum_cycles(int n):
      {
        //n_ = 2 ^ n;

      }

      ~minimum_cycles(void) {}

      void compute_best_cycle(const vector<int>& cost)
      {
            generate(n_ * n_, cost);
      }

      void write(ostream& os)
      {}

      void generate(int i, const vector<int>& cost)
      {
            if (i <= 0) {

               /* */

            }

            sol_[i - 1] = 1;
            generate(i - 1, cost);
            sol_[i - 1] = 0;
            generate(i - 1, cost);
      }


      int pos(int i, int j) const
      {
        //la posición i * n + j del vector.
      }

      bool no_diag(void)
      {}

      void compute_in_degree(vector<int>& id)
      {
      }

      void compute_out_degree(vector<int>& od)
      {
      }

      void compute_degree(vector<int>& id, vector<int>& od)
      {
            compute_in_degree(id);
            compute_out_degree(od);
      }

      bool is_cycle(const vector<int>& id, const vector<int>& od)
      {
      }

      void evaluate(const vector<int>& cost)
      {
            int ccost = 0;
            for(int i = n_ * n_ - 1; i >= 0; i--)
                  ccost += cost[i] * sol_[i];

            if (ccost < best_value_) {
                  best_value_ = ccost;
                  best_sol_ = sol_;
            }
      }


};

int main(void)
{
      minimum_cycles mc(4);

      vector<int> cost(16);

      for(int i = 0; i < 16; i++)
            cost[i] = -1;

      mc.compute_best_cycle(cost);

      return 0;
}
