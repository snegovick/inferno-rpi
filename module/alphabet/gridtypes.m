# warning: autogenerated code; don't bother to change this, change mktypeset.b or grid.b instead
Gridtypes: module {
	PATH: con "/dis/alphabet/gridtypes.dis";
	Gridcvt: adt {
		values: ref Extvalues->Values[ref Grid->Value];

		int2ext: fn(cvt: self ref Gridcvt, v: ref Grid->Value): ref Alphabet->Value;
		ext2int: fn(cvt: self ref Gridcvt, ev: ref Alphabet->Value): ref Grid->Value;
		dup: fn(cvt: self ref Gridcvt, ev: ref Alphabet->Value): ref Alphabet->Value;
		free: fn(cvt: self ref Gridcvt, ev: ref Alphabet->Value, used: int);
	};

	proxy: fn(): chan of ref Proxy->Typescmd[ref Alphabet->Value];
	proxy0: fn(): (
			chan of ref Proxy->Typescmd[ref Alphabet->Value],
			chan of (string, chan of ref Proxy->Typescmd[ref Grid->Value]),
			ref Gridcvt
		);
};

Gridsubtypes: module {
	proxy: fn(): chan of ref Proxy->Typescmd[ref Grid->Value];
};
