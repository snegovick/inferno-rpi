#define KiB     1024u       /*! Kibi 0x0000000000000400 */
#define MiB     1048576u    /*! Mebi 0x0000000000100000 */
#define GiB     1073741824u /*! Gibi 000000000040000000 */

#define KZERO       0                       /*! kernel address space */
#define BY2PG       (4*KiB)                 /*! bytes per page */
#define BY2V        8                       /*! only used in xalloc.c */
#define MACHADDR    (KZERO+0x2000)          /*! Mach structure */
#define	L2			(KZERO+0x3000)			/* L2 ptes for vectors etc */
#define	L1			(KZERO+0x4000)			/* tt ptes: 16KiB aligned */
#define	KTZERO		(KZERO+0x8000)			/* kernel text start */
#define ROUND(s,sz) (((s)+(sz-1))&~(sz-1))
#define PGROUND(s)	ROUND(s, BY2PG)

#define	MAXMACH		1

#define KSTKSIZE    (8*KiB)
#define KSTACK      KSTKSIZE

#define	PHYSDRAM	0
#define	DRAMSIZE	(256*MiB)

#define	PHYSIO		0x20000000
#define VIRTIO		0x20000000
#define	IOSIZE		(16*MiB)
#define	FRAMEBUFFER	0xA0000000
