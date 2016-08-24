#include <mex.h>
#include "./ostrich_twister_rand.c"

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]){
    double* m;
    if (nrhs == 0) {
        plhs[0] = mxCreateDoubleMatrix(1,1,mxREAL);
        m = mxGetPr(plhs[0]);
        *m = ostrich_rand_double(); 
    } else if (nrhs == 1 || nrhs == 2) {
        int row_nb, col_nb;
        row_nb = (int)mxGetScalar(prhs[0]);
        if (nrhs == 1) {
            col_nb = row_nb;
        } else {
            col_nb = (int)mxGetScalar(prhs[1]);
        } 
        plhs[0] = mxCreateDoubleMatrix(row_nb,col_nb,mxREAL);
        m = mxGetPr(plhs[0]);
        ostrich_rand_matrix(m, row_nb, col_nb);
    } else {
        mexErrMsgIdAndTxt("ostrich_rand:nrhs", "Invalid number of arguments, expecting two or less");
    }
    return ;
}
