   CPoint   ptStart(100, 100);
   CSize   szOffset(35, 35);
   CPoint   ptEnd;

   ptEnd = ptStart + szOffset;

   CPoint   ptResult(135, 135);

   ASSERT(ptResult == ptEnd);

   // also works on SIZE

   ptStart = CPoint(100, 100);

   SIZE   sz;
   sz.cx = 35;
   sz.cy = 35;

   ptEnd = ptStart + sz;

   ASSERT(ptResult == ptEnd);   