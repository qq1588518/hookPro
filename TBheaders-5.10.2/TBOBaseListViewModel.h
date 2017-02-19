//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseListViewModel.h"

@protocol ITBOModelLoader;

@interface TBOBaseListViewModel : BaseListViewModel
{
    id <ITBOModelLoader> _loader;	// 8 = 0x8
}

+ (id)initWithModelLoader:(id)arg1;
@property(retain, nonatomic) id <ITBOModelLoader> loader; // @synthesize loader=_loader;
- (void).cxx_destruct;
- (void)onloaderCompleted:(struct MtopExtResponse *)arg1 succeeded:(_Bool)arg2;
- (void)onload;
- (_Bool)hasMore;
- (id)initWithModelLoader:(id)arg1;

@end
