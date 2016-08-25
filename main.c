int main(int argc, char** argv)
{
    int n;
    double y;

    if (argc < 2) {
        printf("usage: %s x\n", argv[0]);
        return 0;
    }

    n = atoi(argv[1]); 

    for (int i = 0; i < 10; ++i) {
        printf("%f\n", ostrich_rand_double());
    }

    return 0;
}
