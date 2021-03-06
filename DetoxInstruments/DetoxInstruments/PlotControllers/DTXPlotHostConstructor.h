//
//  DTXPlotHostConstructor.h
//  DetoxInstruments
//
//  Created by Leo Natan (Wix) on 4/26/18.
//  Copyright © 2018 Wix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DTXLayerView.h"
#import "DTXGraphHostingView.h"
#import "DTXTouchBarGraphHostingView.h"

@interface DTXPlotHostConstructor : NSObject

@property (nonatomic, strong, readonly) DTXLayerView* wrapperView;
@property (nonatomic, strong, readonly) __kindof DTXGraphHostingView* hostingView;
@property (nonatomic, strong, readonly) CPTGraph* graph;
@property (nonatomic, readonly) BOOL isForTouchBar;

- (void)setUpWithView:(NSView *)view;
- (void)setUpWithView:(NSView *)view insets:(NSEdgeInsets)insets isForTouchBar:(BOOL)isForTouchBar;
- (void)setupPlotsForGraph;
- (void)didFinishViewSetup;

@end
