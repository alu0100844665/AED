
class minimum_cycles
{
private:
      const int n_;

      vector<int> sol_;

      int best_value_;
      vector<int> best_sol_;
public:
      minimum_cycles(int n):
      {}

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
      {}
      
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
