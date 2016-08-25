int main(int argc, char** argv)
{
    int n;
    double y;

    if (argc < 2) {
        printf("usage: %s x\n", argv[0]);
        return 0;
    }

    n = atoi(argv[1]); 

    init_genrand(1337);

    y = run(n);
    return 0;
}
