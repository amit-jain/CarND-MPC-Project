#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

using OUTPUT = tuple<double, double, vector<double>, vector<double>>;

class MPC {
 public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  OUTPUT Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
};

#endif /* MPC_H */
