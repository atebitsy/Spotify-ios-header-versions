//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDPreviewableWidget.h"

#import "IDFocusable-Protocol.h"
#import "IDHmiActionDelegate-Protocol.h"

@class IDHmiAction, IDListModel, IDModel, IDProperty, IDView, IDWidgetHmiService, NSLock, NSMutableDictionary, NSString;
@protocol IDTableDelegate;

@interface IDTable : IDPreviewableWidget <IDHmiActionDelegate, IDFocusable>
{
    _Bool _tableDirty;
    _Bool _tableVisible;
    _Bool _batchUpdateInProgress;
    id <IDTableDelegate> _delegate;
    IDView *_targetView;
    IDModel *_tableModel;
    IDView *_contentPreviewView;
    NSString *_contentPreviewText;
    long long _contentPreviewImageId;
    IDHmiAction *_selectAction;
    IDHmiAction *_focusAction;
    IDModel *_targetModel;
    IDProperty *_columnWidthsProperty;
    IDProperty *_tableCutTypeProperty;
    long long _rows;
    long long _cols;
    NSMutableDictionary *_cells;
    NSLock *_cellsDictLock;
    NSLock *_setRowsCountLock;
    IDListModel *_listModel;
    IDListModel *_emptyTable;
    long long _selectedRow;
    IDWidgetHmiService *_widgetHmiService;
}

@property(getter=isBatchUpdateInProgress) _Bool batchUpdateInProgress; // @synthesize batchUpdateInProgress=_batchUpdateInProgress;
@property __weak IDWidgetHmiService *widgetHmiService; // @synthesize widgetHmiService=_widgetHmiService;
@property long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property _Bool tableVisible; // @synthesize tableVisible=_tableVisible;
@property _Bool tableDirty; // @synthesize tableDirty=_tableDirty;
@property(readonly, nonatomic) IDListModel *emptyTable; // @synthesize emptyTable=_emptyTable;
@property(retain, nonatomic) IDListModel *listModel; // @synthesize listModel=_listModel;
@property(retain) NSLock *setRowsCountLock; // @synthesize setRowsCountLock=_setRowsCountLock;
@property(retain) NSLock *cellsDictLock; // @synthesize cellsDictLock=_cellsDictLock;
@property(retain) NSMutableDictionary *cells; // @synthesize cells=_cells;
@property long long cols; // @synthesize cols=_cols;
@property long long rows; // @synthesize rows=_rows;
@property(retain, nonatomic) IDProperty *tableCutTypeProperty; // @synthesize tableCutTypeProperty=_tableCutTypeProperty;
@property(retain, nonatomic) IDProperty *columnWidthsProperty; // @synthesize columnWidthsProperty=_columnWidthsProperty;
@property(readonly) IDModel *targetModel; // @synthesize targetModel=_targetModel;
@property(retain, nonatomic) IDHmiAction *focusAction; // @synthesize focusAction=_focusAction;
@property(retain, nonatomic) IDHmiAction *selectAction; // @synthesize selectAction=_selectAction;
@property(nonatomic) long long contentPreviewImageId; // @synthesize contentPreviewImageId=_contentPreviewImageId;
@property(retain, nonatomic) NSString *contentPreviewText; // @synthesize contentPreviewText=_contentPreviewText;
@property(nonatomic) __weak IDView *contentPreviewView; // @synthesize contentPreviewView=_contentPreviewView;
@property(readonly, nonatomic) IDModel *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) __weak IDView *targetView; // @synthesize targetView=_targetView;
@property __weak id <IDTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendEmptyTable;
- (void)rowFocused:(id)arg1;
- (void)rowSelected:(id)arg1;
- (void)handleAction:(id)arg1 info:(id)arg2;
- (void)flushFromColumn:(long long)arg1 countOfColumns:(long long)arg2 fromRow:(long long)arg3 countOfRows:(long long)arg4;
- (void)flushColumns:(id)arg1 fromRow:(long long)arg2 countOfRows:(long long)arg3;
- (id)columnNumbersNeedsFlushForPriority:(long long)arg1 inRow:(long long)arg2;
- (void)flushTableCells:(long long)arg1;
- (void)flushTableContent;
- (_Bool)visible;
- (void)setVisible:(_Bool)arg1;
- (void)focus;
- (void)endUpdates;
- (void)beginUpdates;
- (void)setCutType:(unsigned long long)arg1;
- (void)setColumnWidths:(id)arg1;
- (void)setUncheckedCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)setCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)setRowCount:(long long)arg1 columnCount:(long long)arg2;
- (void)removeAllCells;
- (void)focusRow:(long long)arg1;
- (id)allObjectSupportingHmiServiceLifecycleProtocol;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)initCells;
- (id)initWithWidgetId:(long long)arg1 previewModel:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2 targetModel:(id)arg3 actionId:(long long)arg4 focusId:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 tableModel:(id)arg2 targetModel:(id)arg3 actionId:(long long)arg4 focusId:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 tableModel:(id)arg2 previewModel:(id)arg3 focusAction:(id)arg4 selectAction:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
