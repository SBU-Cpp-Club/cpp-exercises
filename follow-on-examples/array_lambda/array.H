template <typename T, int XLO, int XHI, int YLO, int YHI>
struct Array
{
    inline
    const T& operator () (int i, int j) const noexcept
    {
        // C++ ordering, j and j+1 are adjacent in memory
        // so we index as (stride in j)*i + j
        // but have an offset (XLO*(YHI-YLO+1)+YLO)
        return array[j+i*(YHI-YLO+1)-(XLO*(YHI-YLO+1)+YLO)];
    }

    inline
    T& operator () (int i, int j) noexcept {
        // C++ ordering, j and j+1 are adjacent in memory
        // so we index as (stride in j)*i + j
        // but have an offset (XLO*(YHI-YLO+1)+YLO)
        return array[j+i*(YHI-YLO+1)-(XLO*(YHI-YLO+1)+YLO)];
    }

    T array[(XHI-XLO+1)*(YHI-YLO+1)];
};


template <typename T, typename L>
void ParallelFor(T xbegin, T xend, T ybegin, T yend, L&& f) noexcept
{
    for (int i = xbegin; i <= xend; i++) {
        for (int j = ybegin; j <= yend; j++) {
            f(i, j);
        }
    }
}
