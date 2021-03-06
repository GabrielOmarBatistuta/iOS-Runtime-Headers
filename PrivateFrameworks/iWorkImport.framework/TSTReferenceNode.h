/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TSCECalculationEngine, TSDMultiPaneController, TSTReferenceColorHelper;

@interface TSTReferenceNode : TSTExpressionNode {
    struct { 
        struct { 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } mTopLeft; 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } mBottomRight; 
        } range; 
        struct __CFUUID {} *tableID; 
    BOOL mBlankForKeyboardInsertion;
    TSCECalculationEngine *mCalculationEngine;
    NSString *mFormulaPlainText;
    struct __CFUUID { } *mHostTableID;
    TSDMultiPaneController *mMenuPopoverController;
    int mRangeContext;
    } mRangeReference;
    BOOL mRangeWithFunction;
    NSString *mRefString;
    TSTReferenceColorHelper *mReferenceColorHelper;
    unsigned char mStickyBits;
}

@property(getter=isBlankForKeyboardInsertion) BOOL blankForKeyboardInsertion;
@property(retain,readonly) TSCECalculationEngine * calculationEngine;
@property(setter=setHostTableID:) struct __CFUUID { }* hostTableID;
@property(getter=isLocalReference,readonly) BOOL localReference;
@property(getter=isNonSpanningRange,readonly) BOOL nonSpanningRange;
@property(getter=isRange,readonly) BOOL range;
@property int rangeContext;
@property struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; } rangeCoordinate;
@property struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; } rangeReference;
@property(getter=isRangeWithFunction) BOOL rangeWithFunction;
@property(retain) TSTReferenceColorHelper * referenceColorHelper;
@property(getter=isResizable,readonly) BOOL resizable;
@property(getter=isSimpleRowOrColumnReference,readonly) BOOL simpleRowOrColumnReference;
@property(getter=isSingleASTNode,readonly) BOOL singleASTNode;
@property unsigned char stickyBits;
@property(setter=setTableID:) struct __CFUUID { }* tableID;

- (id).cxx_construct;
- (id)asTableSelection;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)calculationEngine;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)exportString;
- (id)formulaPlainText;
- (unsigned int)hash;
- (struct __CFUUID { }*)hostTableID;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initFromArchive:(const struct ReferenceNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; struct RangeReferenceArchive {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg3 stickyBits:(unsigned char)arg4 hostTableID:(struct __CFUUID { }*)arg5 tableID:(struct __CFUUID { }*)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned int)arg8 lastIndex:(unsigned int)arg9;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (BOOL)isBlankForKeyboardInsertion;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocalReference;
- (BOOL)isNonSpanningRange;
- (BOOL)isRange;
- (BOOL)isRangeWithFunction;
- (BOOL)isResizable;
- (BOOL)isSimpleRowOrColumnReference;
- (BOOL)isSingleASTNode;
- (BOOL)isValidReference;
- (void)p_buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 forRangeComponent:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 stickyBits:(unsigned char)arg3 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (void)p_invalidate;
- (void)p_resetMenu;
- (int)rangeContext;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })rangeCoordinate;
- (struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeReference;
- (id)referenceColorHelper;
- (void)saveToArchive:(struct ReferenceNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; struct RangeReferenceArchive {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setBlankForKeyboardInsertion:(BOOL)arg1;
- (void)setHostTableID:(struct __CFUUID { }*)arg1;
- (void)setRangeContext:(int)arg1;
- (void)setRangeCoordinate:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1;
- (void)setRangeReference:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (void)setRangeWithFunction:(BOOL)arg1;
- (void)setReferenceColorHelper:(id)arg1;
- (void)setStickyBits:(unsigned char)arg1;
- (void)setTableID:(struct __CFUUID { }*)arg1;
- (unsigned char)stickyBits;
- (id)string;
- (struct __CFUUID { }*)tableID;
- (int)tokenType;

@end
