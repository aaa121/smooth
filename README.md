# smooth
[![CRAN_Status_Badge](http://www.r-pkg.org/badges/version/smooth)](https://cran.r-project.org/package=smooth)
[![Downloads](http://cranlogs.r-pkg.org/badges/smooth)](https://cran.r-project.org/package=smooth)

The package _smooth_ contains several smoothing (exponential and not) functions that are used in forecasting.

Here is the list of included functions:

1. es - the ETS function. It can handle exogenous variables and has a handy "holdout" parameter. There are several cost function implemented, including trace forecast based ones. Model selection is done via branch and bound algorithm and there's a possibility to use AIC weights in order to produce combined forecasts. Finally, all the possible ETS functions are implemented here.
2. ces - Complex Exponential Smoothing. Function estimates CES and makes forecast. See documentation for details.
3. ges - Generalised Exponential Smoothing. Next step from CES. The paper on this is in the process.
4. ves - Vector Exponential Smoothing. Vector form of the ETS model.
5. ssarima - SARIMA estimated in state-space framework. Allows multiple seasonalities.
6. auto.ces - selection between seasonal and non-seasonal CES models.
7. auto.ssarima - selection between different State-Space ARIMA models.
8. auto.ges - automatic selection of the most appropriate GES model.
9. sim.es - simulation of data using ETS framework with a predefined (or random) smoothing parameters and initial values.
10. sim.ssarima - simulation of data using State-Space ARIMA framework with a predefined (or randomly generated) parameters and initial values.
11. sim.ces - simulation of data using CES with a predefined (or random) complex smoothing parameters and initial values.
12. sim.ges - simulation functions for GES.
13. sma - Simple Moving Average in state-space form.
14. iss - intermittent data state-space model. This function models the part with data occurrences using one of the following methods: Croston's, TSB, fixed, SBA or logistic probability.
15. viss - the vector counterpart of iss.

Future works:

16. cma - Centred Moving Average. This should be based on sma(), but would be available for time series decomposition.
17. nus - Non-uniform Smoothing. The estimation method used in order to update parameters of regression models.
18. sofa - Survival of the fittest algorithm applied to state-space models.

## Installation

The stable version of the package is available on CRAN, so you can install it by running:
> install.packages("smooth")

A recent, development version, is available via github and can be installed using "devtools" in R. Firstly make sure that you have devtools:
> if (!require("devtools")){install.packages("devtools")}

and after that run:
> devtools::install_github("config-i1/smooth")

## Notes

The package depends on Rcpp and RcppArmadillo, which will be installed automatically.

However Mac OS users may need to install gfortran libraries in order to use Rcpp. Follow the link for the instructions: http://www.thecoatlessprofessor.com/programming/rcpp-rcpparmadillo-and-os-x-mavericks-lgfortran-and-lquadmath-error/

Sometimes after upgrade of smooth from previous versions some functions stop working. This is because C++ functions are occasionally stored in deeper unknown corners of R's mind. Restarting R usually solves the problem. If it  doesn't, completely remove smooth (uninstall + delete the folder "smooth" from R packages folder), restart R and reinstall smooth.
